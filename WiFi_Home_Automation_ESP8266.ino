/*************************************************************
  By Shyam Ravi- theTechnowright
  www.youtube.com/thetechnowright 
  
  Download latest Blynk library here:
  https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

  You’ll need:
   - Blynk App (download from AppStore or Google Play)
   - ESP8266 board
   - Decide how to connect to Blynk
     (USB, Ethernet, Wi-Fi, Bluetooth, ...
 *************************************************************/
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.

char auth[] = "XXXXXXXXXXXXXXXXXXX";//Enter your Auth token here

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "XXXXXXX";           //SSID
char pass[] = "XXXXXXXXXXX";      //Password

void setup()
{
  // Debug console
  Serial.begin(115200); //ESP8266 boards

  //Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8080);
  //Blynk.begin(auth, ssid, pass, IPAddress(XXX,XXX,X,XX), 8080);
}

void loop()
{
  Blynk.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}
