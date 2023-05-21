#ifndef COMMON_H
#define COMMON_H
#include <esp_now.h>
#include <esp_wifi.h>
#include <WiFi.h>

#define DEBUG (1)

#ifdef DEBUG
  #define D(x)      Serial.print(x)
  #define DF(x)     Serial.print(x,4)
  #define DL(x)     Serial.println(x)   // Macros for serial print
  #define LOOPDEL   500                 // Loop delay in millis
#else
  #define D(x)
  #define DF(x)
  #define DL(x)
  #define LOOPDEL   2000                 // Loop delay in millis
#endif

void PrintMac(const uint8_t * mac_addr){
#ifdef DEBUG
  char macStr[18];
  snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x", mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
  DL(macStr);
#endif
}

#endif