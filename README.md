# EDK2 UEFI Firmware For Xiaomi 11T Pro

## Resources

[Discord Server](https://discord.gg/Gb4KAqAQdm)

## Status

Is able to boot SimpleInit Also booting something from UFS

## Working

- Display
- Clocks
- UFS
- Buttons (SimpleInit only)
- Slot Switch (Unstable)

## Not Working

- USB
- Touchscreen
- ...

## Building

You need to clone these repositories 

```bash
git clone https://github.com/Robotix22/edk2-vili.git --recursive
```

Now Install needed Packages

For Debian and Ubuntu:

```bash
sudo apt install build-essential uuid-dev iasl git nasm gcc-aarch64-linux-gnu mkbootimg python3-distutils gettext
```

Now you can build the UEFI Image by doing

```bash
cd edk2-vili
./build.sh
```

And finally you can now boot the Image or flash the image to `boot` or `recovery`

```bash
fastboot boot boot-vili.img
fastboot flash boot boot-vili.img
fastboot flash recovery boot-vili.img
```

## Credits

This is based on [edk2-msm](https://github.com/edk2-porting/edk2-msm)

## License

All code except drivers in GPLDriver directory are licensed under BSD 2-Clause. GPL Drivers are licensed under GPLv2 license.
