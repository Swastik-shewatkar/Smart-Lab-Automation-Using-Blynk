/*************************************************
   SMART LABORATORY
   ESP32 + Blynk + 8 Channel Relay
**************************************************/

#define BLYNK_TEMPLATE_ID "TMPL3e1x6xsAi"
#define BLYNK_TEMPLATE_NAME "Smart Laboratory"
#define BLYNK_AUTH_TOKEN "OG-Xu6_Fqt7pSlI2G9EhQ6RP02jiqM9F"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Robot";
char pass[] = "123123456";

//--------------- Relay Pins ----------------//

#define LIGHT1 13
#define FAN1   18

#define LIGHT2 19
#define FAN2   27

#define LIGHT3 26
#define FAN3   25

#define LIGHT4 33
#define FAN4   32

//-------------------------------------------//

void setup()
{
  Serial.begin(115200);

  pinMode(LIGHT1, OUTPUT);
  pinMode(FAN1, OUTPUT);

  pinMode(LIGHT2, OUTPUT);
  pinMode(FAN2, OUTPUT);

  pinMode(LIGHT3, OUTPUT);
  pinMode(FAN3, OUTPUT);

  pinMode(LIGHT4, OUTPUT);
  pinMode(FAN4, OUTPUT);

  // Active LOW Relay
  digitalWrite(LIGHT1, HIGH);
  digitalWrite(FAN1, HIGH);

  digitalWrite(LIGHT2, HIGH);
  digitalWrite(FAN2, HIGH);

  digitalWrite(LIGHT3, HIGH);
  digitalWrite(FAN3, HIGH);

  digitalWrite(LIGHT4, HIGH);
  digitalWrite(FAN4, HIGH);

  Serial.println("Connecting to WiFi & Blynk...");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Connected!");
}

void loop()
{
  Blynk.run();
}

//================= LIGHT 1 =================//

BLYNK_WRITE(V0)
{
  digitalWrite(LIGHT1, param.asInt() ? LOW : HIGH);
}

//================= FAN 1 ===================//

BLYNK_WRITE(V1)
{
  digitalWrite(FAN1, param.asInt() ? LOW : HIGH);
}

//================= LIGHT 2 =================//

BLYNK_WRITE(V2)
{
  digitalWrite(LIGHT2, param.asInt() ? LOW : HIGH);
}

//================= FAN 2 ===================//

BLYNK_WRITE(V3)
{
  digitalWrite(FAN2, param.asInt() ? LOW : HIGH);
}

//================= LIGHT 3 =================//

BLYNK_WRITE(V4)
{
  digitalWrite(LIGHT3, param.asInt() ? LOW : HIGH);
}

//================= FAN 3 ===================//

BLYNK_WRITE(V5)
{
  digitalWrite(FAN3, param.asInt() ? LOW : HIGH);
}

//================= LIGHT 4 =================//

BLYNK_WRITE(V6)
{
  digitalWrite(LIGHT4, param.asInt() ? LOW : HIGH);
}

//================= FAN 4 ===================//

BLYNK_WRITE(V7)
{
  digitalWrite(FAN4, param.asInt() ? LOW : HIGH);
}

//============= ALL LIGHTS ==================//

BLYNK_WRITE(V8)
{
  bool state = param.asInt();

  digitalWrite(LIGHT1, state ? LOW : HIGH);
  digitalWrite(LIGHT2, state ? LOW : HIGH);
  digitalWrite(LIGHT3, state ? LOW : HIGH);
  digitalWrite(LIGHT4, state ? LOW : HIGH);

  Blynk.virtualWrite(V0, state);
  Blynk.virtualWrite(V2, state);
  Blynk.virtualWrite(V4, state);
  Blynk.virtualWrite(V6, state);
}

//============== ALL FANS ===================//

BLYNK_WRITE(V9)
{
  bool state = param.asInt();

  digitalWrite(FAN1, state ? LOW : HIGH);
  digitalWrite(FAN2, state ? LOW : HIGH);
  digitalWrite(FAN3, state ? LOW : HIGH);
  digitalWrite(FAN4, state ? LOW : HIGH);

  Blynk.virtualWrite(V1, state);
  Blynk.virtualWrite(V3, state);
  Blynk.virtualWrite(V5, state);
  Blynk.virtualWrite(V7, state);
}