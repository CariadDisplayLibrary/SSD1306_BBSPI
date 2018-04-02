#include <SSD1306.h>
#include <SSD1306_BBSPI.h>

const int reset = 8;
const int dc = 9;
const int cs = 10;
const int sck = 13;
const int mosi = 11;

SSD1306_BBSPI tft(sck, mosi, cs, dc, reset);

void setup() {
    tft.initializeDevice();
    tft.setBacklight(255);
    tft.fillScreen(Color::Black);
    tft.drawRectangle(0, 0, 127, 63, Color::White);
}

void loop() {
    tft.setCursor(10, 10);
    tft.print(millis());
}
