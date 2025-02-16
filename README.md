# PhantomWiFi
A tool that broadcasts fake SSIDs to disrupt Wi-Fi scans.

# Key Features
- Simple Setup.
- Generates upto 100 Fake SSIDs.
- Easily controlled by Serial Console.

# Supported Board
- It supports NodeMCU ESP8266 Boards only.
- It supports 2.4GHz frequency only.
- If possible, use those NodeMCU ESP8266 boards which contain `CP2102` driver chipset.

# Setup
1. Download Arduino IDE from [here](https://www.arduino.cc/en/software) according to your Operating System.
2. Install it.
3. Go to `File` → `Preferences` → `Additional Boards Manager URLs`.
4. Paste the following link :
   
   ```
   https://arduino.esp8266.com/stable/package_esp8266com_index.json
   ```
5. Click on `OK`.
6. Go to `Tools` → `Board` → `Board Manager`.
7. Wait for sometimes and search `esp8266` by `ESP8266 Community`.
8. Simply install it.
9. Wait for sometime and after that it is installed.
10. Restart the Arduino IDE.
11. Done!

# Install
1. Download or Clone the Repository.
2. Open the folder and just double click on `PhantomWiFi.ino` file.
3. It opens in Arduino IDE.
4. Compile the code.
5. Select the correct board from the `Tools` → `Board` → `ESP8266 Boards`.
   - It is generally `NodeMCU 1.0 (ESP-12E Module)`.
6. Select the correct port number of that board.
7. Upload the code.

# Supported Commands
1. `help` - To show help message.
2. `beacon` - Start Beacon Flooding.
3. `stop` - Stop Beacon Flooding.

# Run the Script
1. Open Serial Console from [here](https://wirebits.github.io/SerialConsole/).
2. Select the baud rate `115200`.
3. Click on `Connect`.
   - It ask in the alert pop-up to choose the device want to connect.
   - Select the device from it.
   - Click on `Connect` in the pop-up.
   - If it shows `Connected! Go On!` means we successfully connected to the device.
   - It converted into `Disconnect` button to disconnect the device.
4. After that, type `beacon` to start beacon flooding.
   - It takes almost 3-4 minutes to generate SSIDs.
5. To stop beacon flooding, type `stop`.
   - It also takes almost 3-4 minutes to stop generating SSIDs.

# Note
Need to reconnect in Serial Console beacuse it show some garbage value after `Connected! Go On!`.
