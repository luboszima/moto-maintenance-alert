# moto-maintenance-alert
This repo should be for motorbiker who don't want to think about maintenance cycles.

## How to start?

First, download the dependencies for this repository by running the following command:
```bash
bash scripts/dependencies.sh
```
Next, compile the project using:
```bash
task build
```
Ensure that your ESP32 board is connected to your computer. Don’t forget to check which USB device corresponds to your board by running:
```bash
ls -la /dev/*
```
Then, update the `upload_port` in your configuration to match your device.

### Upload code to your device

Finally, use the following command to upload the compiled code to your ESP32 board:
```bash
task upload
```
