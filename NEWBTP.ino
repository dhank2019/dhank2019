#define BLYNK_PRINT Serial    
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "63Qv8fscCxdvrFuLnJm8gHB5SipDEwdu";

char ssid[] = "Cs1";
char pass[] = "12345678";
WidgetLED led1(V0);//LED ON BLYNK APP IS A V0 PIN


void setup() {
  
  Serial.begin(9600);

Blynk.begin(auth, ssid, pass);

}

void loop() {
  Blynk.run();
  
 
   
}
