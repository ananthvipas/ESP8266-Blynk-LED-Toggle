# Control-LED-on-off-ESP8266-using-Blynk-IoT

#define BLYNK_PRINT Serial

     // This line sets the Blynk library to print debug messages via the Serial communication interface.
#include <ESP8266WiFi.h>

     // This line includes the library for the ESP8266 WiFi module.
#include <BlynkSimpleEsp8266.h>

     // This line includes the library for the Blynk IoT platform for the ESP8266 module.


char auth[] = "YOUR_AUTH_TOKEN";

    //  This line creates a character array called "auth" and assigns it with the Blynk authentication token. You need to replace "YOUR_AUTH_TOKEN" with your own Blynk authentication token.



char ssid[] = "YOUR_WIFI_SSID";

      This line creates a character array called "ssid" and assigns it with the name of the WiFi network you want to connect to. You need to replace "YOUR_WIFI_SSID" with the name of your WiFi network.



char pass[] = "YOUR_WIFI_PASSWORD";

      //This line creates a character array called "pass" and assigns it with the password of the WiFi network you want to connect to. You need to replace "YOUR_WIFI_PASSWORD" with the password of your WiFi network.



int led1Pin = D0;

      //This line creates an integer variable called "led1Pin" and assigns it with the pin number for the first LED bulb. In this case, it is set to D0 pin of ESP8266.
      
      
int led2Pin = D1;

     // This line creates an integer variable called "led2Pin" and assigns it with the pin number for the second LED bulb. In this case, it is set to D1 pin of ESP8266.



void setup()

     // This line declares the beginning of the "setup" function, which runs once when the microcontroller starts up.



Serial.begin(9600);

     // This line sets up the Serial communication interface with a baud rate of 9600 bits per second.



Blynk.begin(auth, ssid, pass);

     //This line initializes the Blynk IoT platform using the Blynk authentication token, WiFi network name, and password.



pinMode(led1Pin, OUTPUT);

      //This line sets the mode of the first LED bulb pin to "OUTPUT", which means that it will be used to send a signal to the LED.



pinMode(led2Pin, OUTPUT);

      //This line sets the mode of the second LED bulb pin to "OUTPUT", which means that it will be used to send a signal to the LED.



void loop()

      //This line declares the beginning of the "loop" function, which runs repeatedly after the "setup" function has completed.



Blynk.run();

      This line is used to handle incoming Blynk messages and update the status of the LED bulbs.



BLYNK_WRITE(V1)

      This line creates a Blynk function for controlling the first LED bulb using a virtual pin called "V1".



int value = param.asInt();

      This line retrieves the value of the virtual pin and stores it in an integer variable called "value".


digitalWrite(led1Pin, value);

      This line sets the state of the first LED bulb to the value received from the virtual pin. If the value is 1, the LED will turn on. If the value is 0, the LED will turn off.


BLYNK_WRITE(V2)

      This line creates a Blynk function for controlling the second LED bulb using a virtual pin called "V2".



int value = param.asInt();

      This line retrieves
