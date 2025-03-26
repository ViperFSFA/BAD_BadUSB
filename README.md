# BAD_BadUSB

**A collection of BadUSB scripts for ESP32 and DuckyScript.**

## Disclaimer
This project is strictly for **legal and ethical** use. It is intended for cybersecurity research, educational purposes, and authorized penetration testing. Unauthorized or malicious use of this tool is **illegal** and can have serious consequences. Use responsibly.

## Overview
**BAD_BadUSB** contains scripts designed to demonstrate the capabilities of USB emulation devices such as an ESP32 acting as a BadUSB or a DuckyScript payload. These scripts execute various harmless yet disruptive pranks when plugged into a target computer.

## Features
- **ESP32 BadUSB Script (Arduino)**: Emulates a keyboard/mouse to execute predefined actions.
- **DuckyScript Version**: A translated version of the Arduino script for devices that support DuckyScript.
- **Add-on Payloads**:
  - **BSOD Prank**: Forces a Blue Screen of Death (BSOD) on Windows systems.
  - **Desktop Icon Shuffle**: Randomly rearranges desktop icons.
  - **Disable Task Manager**: Prevents users from opening Task Manager.

## Files
| File | Description |
|------|-------------|
| `ESP32_BadUSB.ino` | Arduino script for an ESP32 to act as a BadUSB device. |
| `DuckyScript_Payload.txt` | The equivalent of the ESP32 script written in DuckyScript. |
| `Addons/BSOD_Prank.txt` | A DuckyScript payload that triggers a Windows BSOD. |
| `Addons/Icon_Shuffle.txt` | A DuckyScript payload that randomly moves desktop icons. |
| `Addons/Disable_Task_Manager.txt` | A DuckyScript payload that disables Task Manager. |

## How to Use
### ESP32 Version (Arduino)
1. Install the **Arduino IDE** and the necessary **ESP32 board package**.
2. Add the `Keyboard.h` and `Mouse.h` libraries if not included.
3. Upload `ESP32_BadUSB.ino` to an ESP32 board that supports HID emulation.
4. Connect the ESP32 to a target computer and observe the effects.

### DuckyScript Version
1. Copy `DuckyScript_Payload.txt` to a USB Rubber Ducky or compatible device.
2. Load the payload using **Ducky Encoder** or an equivalent compiler.
3. Insert the device into a target system to execute the script.

### Add-ons
1. Navigate to the `Addons` folder.
2. Choose an additional script (e.g., `BSOD_Prank.txt`).
3. Encode and load it onto a USB BadUSB device.
4. Plug the device into the target machine.

## Warning
Executing these scripts without explicit permission is illegal and unethical. Always ensure you have proper authorization before testing these tools.

## Author
Created by **ViperFSFA**

## License
This project is distributed under an **open-source license**, but **misuse is strictly prohibited**. Use at your own risk.

