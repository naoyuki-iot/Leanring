#include <M5Core2.h>
#include <WiFi.h>

const char* SSID = "IODATA-af2f44-2G";
const char* PASSWORD = "4613892169708";
const char* NTP_SERVER = "ntp.jst.mfeed.ad.jp";
const char* TZ = "JST-9";

const uint8_t FONT_NUMBER = 2; // 16px ASCII Font
const uint8_t FONT_SIZE = 16;

const bool LCD_ENABLE = true;
const bool SD_ENABLE = false;
const bool SERIAL_ENABLE = true;
const bool I2C_ENABLE = true;

RTC_TimeTypeDef rtcTime;
RTC_DateTypeDef rtcDate;

extern bool setRTC(const char*, const char*);
extern void getRTC(RTC_DateTypeDef&, RTC_TimeTypeDef&);
extern void printDateTime(const RTC_DateTypeDef&, const RTC_TimeTypeDef&);

void setup() {
  M5.begin(LCD_ENABLE, SD_ENABLE, SERIAL_ENABLE, I2C_ENABLE);
  M5.Rtc.begin();

  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextFont(FONT_NUMBER);
  M5.Lcd.setCursor(0, 0);
  M5.Lcd.print("NTP");
  M5.Lcd.setCursor(0, FONT_SIZE * 1);
  M5.Lcd.printf("Server : %s", NTP_SERVER);
  M5.Lcd.setCursor(0, FONT_SIZE * 3);
  M5.Lcd.print("RTC");

  M5.Lcd.setCursor(0, FONT_SIZE * 2);
  const bool result = setRTC(TZ, NTP_SERVER);
  M5.Lcd.printf("Result : %s\n", result == true ? "Succeeded" : "Failed");
}

void loop() {
  getRTC(rtcDate, rtcTime);
  M5.Lcd.setCursor(0, FONT_SIZE * 4);
  printDateTime(rtcDate, rtcTime);

  delay(500);
}

void connectWiFi(const char* ssid, const char* password) {
  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" CONNECTED");
}

void disconnectWiFi(void) {
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
}

void setRTCDate(const struct tm& timeInfo) {
  static RTC_DateTypeDef d;

  d.WeekDay = timeInfo.tm_wday;
  d.Month = timeInfo.tm_mon + 1;
  d.Date = timeInfo.tm_mday;
  d.Year = timeInfo.tm_year + 1900;
  M5.Rtc.SetDate(&d);
}

void setRTCTime(const struct tm& timeInfo) {
  static RTC_TimeTypeDef t;

  t.Hours = timeInfo.tm_hour;
  t.Minutes = timeInfo.tm_min;
  t.Seconds = timeInfo.tm_sec;
  M5.Rtc.SetTime(&t);
}

bool setRTC(const char* tz, const char* server) {
  static struct tm timeInfo;

  connectWiFi(SSID, PASSWORD);
  configTzTime(tz, server);
  const bool isSucceeded = getLocalTime(&timeInfo);
  if (isSucceeded) {
    setRTCDate(timeInfo);
    setRTCTime(timeInfo);
  }
  disconnectWiFi();
  return isSucceeded;
}

void getRTC(RTC_DateTypeDef& d, RTC_TimeTypeDef& t) {
  M5.Rtc.GetDate(&d);
  M5.Rtc.GetTime(&t);
}

void printDateTime(const RTC_DateTypeDef& d, const RTC_TimeTypeDef& t) {
  static const char *wd[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

  M5.Lcd.printf("Date   : %04d/%02d/%02d(%s)\n", d.Year, d.Month, d.Date, wd[d.WeekDay]);
  M5.Lcd.printf("Time   : %02d:%02d:%02d\n", t.Hours, t.Minutes, t.Seconds);
}
