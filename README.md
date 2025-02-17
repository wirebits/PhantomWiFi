# PhantomWiFi
A tool that broadcasts fake SSIDs to disrupt Wi-Fi scans and signals.

# Key Features
- Simple Setup.
- Generates upto 120 Fake SSIDs.

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
   - The code starts running automatically.
   - It takes almost 3-4 minutes to generate SSIDs.
