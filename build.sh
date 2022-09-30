#!/bin/bash
# based on the instructions from edk2-platform
set -e
. build_common.sh

rm -rf Build/viliPkg/DEBUG_GCC5/FV/Ffs/7E374E25-8E01-4FEE-87F2-390C23C606CDFVMAIN
# not actually GCC5; it's GCC7 on Ubuntu 18.04.
GCC5_AARCH64_PREFIX=aarch64-linux-gnu- build -s -n 0 -a AARCH64 -t GCC5 -p viliPkg/vili.dsc -b DEBUG
gzip -c < Build/viliPkg/DEBUG_GCC5/FV/VILIPKG_UEFI.fd >uefi_image
cat vili.dtb >>uefi_image
mkbootimg --kernel uefi_image --ramdisk ramdisk --kernel_offset 0x00000000 --ramdisk_offset 0x00000000 --tags_offset 0x00000000 --os_version 12.0.0 --os_patch_level "$(date '+%Y-%m')" -o boot-vili.img
