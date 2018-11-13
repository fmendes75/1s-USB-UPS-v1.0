#Raspberry Pi
The script for the Raspberry Pi was written in Python. It monitors the USB device waiting for a message that will signal the power outage, following it with a shutdown command.

### Development install
The following dependencies need to be installed manually:
```shell
python3 -w pip install pyserial
```
### Run
This will be changed for the final product. During development the script is run like so:
```shell
python3 script.py
```
### User install
This is yet to be finalised. The user install will:
1. Automatically install dependencies.
2. Make the script run on device boot-up

This install will be simply done with an install script like, per example:
```shell
python3 install.py
```
