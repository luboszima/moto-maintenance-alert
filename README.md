# moto-maintenance-alert
This project should help you to keep your motorcycle in good shape. It will connect esp32 to you motorcycle ECU and send you notification in case you'll need do maintenace (change oil, air filters or check the engine valves).

## How to start?

First, download the dependencies for this repository by running the following command:
```bash
bash scripts/dependencies.sh
```
Next, compile the project using:
```bash
task init
```
Ensure that your ESP32 board is connected to your computer. Don’t forget to check which USB device corresponds to your board by running:
```bash
ls -la /dev/*
```
or run
```bash
task update_port
```

### Upload code to your device

Finally, use the following command to upload the compiled code to your ESP32 board:
```bash
task upload
```

### Debug

For debugging, you can use the following command:
```bash
task debug
```
