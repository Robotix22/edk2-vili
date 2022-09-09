# EDK2 UEFI Firmware For Xiaomi 11T Pro

## Warning

You need to use your own FDT File from /sys/firmware or otherwise it may not boot

## Resources

[Discord Server](https://discord.gg/Gb4KAqAQdm)

## Status

Can enter UEFI Shell or enter UEFI Setup with startup.nsh

## Working

- Display
- Clocks (I think)
- ...

## Not Working

- Buttons
- UFS
- USB
- ...

## Building

You need to clone these repositories 

```bash
git clone https://github.com/Robotix22/edk2-vili.git
git clone https://github.com/tianocore/edk2.git --recursive
git clone https://github.com/tianocore/edk2-platforms.git
```
You should have all three directories side by side.

Now Install needed Packages

For Debian and Ubuntu:

```bash
sudo apt install build-essential uuid-dev iasl git nasm gcc-aarch64-linux-gnu mkbootimg python3-distutils gettext
```

Now you can build the UEFI Image by doing

```bash
cd edk2-vili
./firstrun.sh
./build.sh
```

And finally you can now boot the Image or flash the image to `boot` or `recovery`

```bash
fastboot boot boot-vili.img
fastboot flash boot boot-vili.img
fastboot flash recovery boot-vili.img
```

## Credits

This is based on `edk2-sdm845`
