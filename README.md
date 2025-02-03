# This is a Fork

This is a fork of the original Guppy Screen. It is tailored for running natively on the Creality K1 3D printer. It has reduced functionality compared to the original; concentrating on using the display as a quick printing interface instead of a general purpose printer management interface (no macros, console or other advanced features that are better done from a web browser, anyway). There are also some fixes and cleanup.

# Guppy Screen for Klipper

Guppy Screen is a touch UI for Klipper using APIs exposed by Moonraker. It builds on LVGL as a standalone executable, has no dependency on any display servers such as X/Wayland.
<p align="center">
    <a aria-label="Downloads" href="https://github.com/retsyx/guppyscreen/releases">
      <img src="https://img.shields.io/github/downloads/retsyx/guppyscreen/total?style=flat-square">
  </a>
    <a aria-label="Stars" href="https://github.com/retsyx/guppyscreen/stargazers">
      <img src="https://img.shields.io/github/stars/retsyx/guppyscreen?style=flat-square">
  </a>
    <a aria-label="Forks" href="https://github.com/retsyx/guppyscreen/network/members">
      <img src="https://img.shields.io/github/forks/retsyx/guppyscreen?style=flat-square">
  </a>
    <a aria-label="License" href="https://github.com/retsyx/guppyscreen/blob/develop/LICENSE">
      <img src="https://img.shields.io/github/license/retsyx/guppyscreen?style=flat-square">
  </a>
    <a aria-label="Last commit" href="https://github.com/retsyx/guppyscreen/commits/">
      <img src="https://img.shields.io/github/last-commit/retsyx/guppyscreen?style=flat-square">
  </a>
</p>

## Installation / Update
Run the following interactive script via SSH on your K1/Max to install Guppy Screen.

#### Material Design Theme
```
sh -c "$(wget --no-check-certificate -qO - https://raw.githubusercontent.com/retsyx/guppyscreen/main/installer.sh)"
```

#### Z-Bolt Theme
```
sh -c "$(wget --no-check-certificate -qO - https://raw.githubusercontent.com/retsyx/guppyscreen/main/installer.sh)" -s zbolt
```

## Uninstall
ssh into your K1/Max and run the follwow command:
```
/usr/data/guppyscreen/reinstall-creality.sh
```

## Features
:white_check_mark: Print Status  
:white_check_mark: Spoolman Integration  
:white_check_mark: Extrude/Retract  
:white_check_mark: Temperature Control  
:white_check_mark: Fans/LED/Move Control  
:white_check_mark: Fine Tune (speed, flow, z-offset, Pressure Advance)  
:white_check_mark: Limits (Velocity, Acel, Square Corner Velocity, etc.)  
:white_check_mark: File Browser  
:white_check_mark: Supports multiple screen resolutions  
:white_check_mark: TMC Metrics  
:white_check_mark: Multi-Printer support  

## Documentation
You can find various Guppy Screen documents [here](https://ballaswag.github.io/docs/guppyscreen/configuration/).

## Screenshot
### Material Theme
![Material Theme Guppy Screen](https://github.com/ballaswag/guppyscreen/blob/main/screenshots/material/material_screenshot.png)

## Video Demo
https://www.reddit.com/r/crealityk1/comments/17jp59g/new_touch_ui_for_the_k1/

## Support the Original Author of Guppy Screen (ballaswag)
You can directly support the original project by <a href='https://ko-fi.com/ballaswag' target='_blank'><img height='36' style='border:0px;height:36px;' src='https://storage.ko-fi.com/cdn/kofi3.png?v=3' border='0' alt='Buy Me a Coffee at ko-fi.com' /></a>
or
[![](https://img.shields.io/static/v1?label=Sponsor&message=%E2%9D%A4&logo=GitHub&color=%23fe8e86)](https://github.com/sponsors/ballaswag)

## Credits
[Material Design Icons](https://pictogrammers.com/library/mdi/)  
[Z-Bolt Icons](https://github.com/Z-Bolt/OctoScreen)  
[Moonraker](https://github.com/Arksine/moonraker)  
[KlipperScreen](https://github.com/KlipperScreen/KlipperScreen)  
[Fluidd](https://github.com/fluidd-core/fluidd)  
[Klippain-shaketune](https://github.com/Frix-x/klippain-shaketune)  
