#!/bin/bash

mkdir workspace
rm -r boot-vili.img

OUTDIR="${PWD}"
ROOTDIR="$(realpath "$(dirname "$0")")"
cd "${ROOTDIR}"||exit 1

for i in "${EDK2}" ./Common/edk2 ../edk2
do
	if [ -n "${i}" ]&&[ -f "${i}/edksetup.sh" ]
	then
		_EDK2="$(realpath "${i}")"
		break
	fi
done
for i in "${EDK2_PLATFORMS}" ./Common/edk2-platforms ../edk2-platforms
do
	if [ -n "${i}" ]&&[ -d "${i}/Platform" ]
	then
		_EDK2_PLATFORMS="$(realpath "${i}")"
		break
	fi
done
for i in "${SIMPLE_INIT}" GPLDrivers/Library/SimpleInit ./simple-init ../simple-init
do
	if [ -n "${i}" ]&&[ -f "${i}/SimpleInit.inc" ]
	then
		_SIMPLE_INIT="$(realpath "${i}")"
		break
	fi
done
echo "EDK2 Path: ${_EDK2}"
echo "EDK2_PLATFORMS Path: ${_EDK2_PLATFORMS}"
export CROSS_COMPILE="${CROSS_COMPILE:-aarch64-linux-gnu-}"
export GCC5_AARCH64_PREFIX="${CROSS_COMPILE}"
export CLANG38_AARCH64_PREFIX="${CROSS_COMPILE}"
export PACKAGES_PATH="$_EDK2:$_EDK2_PLATFORMS:$_SIMPLE_INIT:$PWD:$PWD/GPLDrivers"
export WORKSPACE="${OUTDIR}/workspace"
mkdir -p "${_SIMPLE_INIT}/build" "${_SIMPLE_INIT}/root/usr/share/locale"
for i in "${_SIMPLE_INIT}/po/"*.po
do
	[ -f "${i}" ]||continue
	_name="$(basename "$i" .po)"
	_path="${_SIMPLE_INIT}/root/usr/share/locale/${_name}/LC_MESSAGES"
	mkdir -p "${_path}"
	msgfmt -o "${_path}/simple-init.mo" "${i}"
done

if "${GEN_ROOTFS}"
then
	 bash "${_SIMPLE_INIT}/scripts/gen-rootfs-source.sh" \
		"${_SIMPLE_INIT}" \
		"${_SIMPLE_INIT}/build"
fi

source "${_EDK2}/edksetup.sh"
[ -d "${WORKSPACE}" ]||mkdir "${WORKSPACE}"
make -C "${_EDK2}/BaseTools"||exit "$?"

# based on the instructions from edk2-platform
rm -f "${ROOTDIR}/boot-vili.img" "${OUTDIR}/uefi-${DEVICE}"*

echo "Building BootShim"
pushd "${ROOTDIR}/BootShim"
rm -f BootShim.bin BootShim.elf
make UEFI_BASE=0xCE000000 UEFI_SIZE=0x02000000
popd

build -s -n 0 -a AARCH64 -t CLANG38 -p "${ROOTDIR}/Platform/viliPkg/vili.dsc" -b DEBUG
cat "${ROOTDIR}/BootShim/BootShim.bin" "${WORKSPACE}/Build/viliPkg/DEBUG_CLANG38/FV/VILIPKG_UEFI.fd" > "${WORKSPACE}/Build/viliPkg/DEBUG_CLANG38/FV/VILIPKG_UEFI.fd-bootshim" 
gzip -c < "${WORKSPACE}/Build/viliPkg/DEBUG_CLANG38/FV/VILIPKG_UEFI.fd-bootshim" > "${WORKSPACE}/uefi-vili.img.gz" 
cat "${WORKSPACE}/uefi-vili.img.gz" "${ROOTDIR}/ImageResources/vili.dtb" > "${WORKSPACE}/uefi-vili.img.gz-dtb" 
cp "${WORKSPACE}/uefi-vili.img.gz-dtb" "${WORKSPACE}/uefi-vili-kernel"
python3 "${ROOTDIR}/ImageResources/mkbootimg.py" --kernel "${WORKSPACE}/uefi-vili-kernel" --ramdisk "${ROOTDIR}/ImageResources/ramdisk" --kernel_offset 0x00000000 --ramdisk_offset 0x00000000 --tags_offset 0x00000000 --os_version 13.0.0 --os_patch_level "$(date '+%Y-%m')" --header_version 1 -o boot-vili.img
echo "Build done: boot-vili.img"
