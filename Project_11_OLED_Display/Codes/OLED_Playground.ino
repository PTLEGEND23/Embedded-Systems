#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup()
{
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    while (1);
  }

  // =========================================================
  // 3.1 Pixels
  // =========================================================

  // display.clearDisplay();
  // display.drawPixel(64, 32, SSD1306_WHITE);
  // display.display();


  // =========================================================
  // 3.2 Vertical Line
  // =========================================================

  // display.clearDisplay();

  // for (int y = 10; y <= 60; y++)
  // {
  //   display.drawPixel(64, y, SSD1306_WHITE);
  // }

  // display.display();


  // =========================================================
  // 3.3 Horizontal Line
  // =========================================================

  // display.clearDisplay();

  // for (int x = 40; x <= 90; x++)
  // {
  //   display.drawPixel(x, 32, SSD1306_WHITE);
  // }

  // display.display();


  // =========================================================
  // 3.4 Plus
  // =========================================================

  // display.clearDisplay();

  // for (int y = 10; y <= 60; y++)
  // {
  //   display.drawPixel(64, y, SSD1306_WHITE);
  // }

  // for (int x = 40; x <= 90; x++)
  // {
  //   display.drawPixel(x, 32, SSD1306_WHITE);
  // }

  // display.display();


  // =========================================================
  // 3.5 Rectangle
  // =========================================================

  // display.clearDisplay();
  // display.drawRect(32, 17, 60, 30, SSD1306_WHITE);
  // display.display();


  // =========================================================
  // 3.6 Filled Rectangle
  // =========================================================

  // display.clearDisplay();
  // display.fillRect(32, 17, 60, 30, SSD1306_WHITE);
  // display.display();


  // =========================================================
  // 3.7 Square
  // =========================================================

  // display.clearDisplay();
  // display.drawRect(49, 17, 30, 30, SSD1306_WHITE);
  // display.display();


  // =========================================================
  // 3.8 Circle
  // =========================================================

  // display.clearDisplay();
  // display.drawCircle(64, 32, 20, SSD1306_WHITE);
  // display.display();


  // =========================================================
  // 3.11 Man
  // =========================================================

  // Head
  // display.clearDisplay();
  // display.drawCircle(64, 10, 5, SSD1306_WHITE);

  // Body
  // for (int y = 16; y <= 35; y++)
  // {
  //   display.drawPixel(64, y, SSD1306_WHITE);
  // }

  // Hands
  // for (int x = 64, y = 17; x >= 55 && y <= 25; x--, y++)
  // {
  //   display.drawPixel(x, y, SSD1306_WHITE);
  // }

  // for (int x = 64, y = 17; x <= 75 && y <= 25; x++, y++)
  // {
  //   display.drawPixel(x, y, SSD1306_WHITE);
  // }

  // Legs
  // for (int x = 64, y = 35; x >= 55 && y <= 45; x--, y++)
  // {
  //   display.drawPixel(x, y, SSD1306_WHITE);
  // }

  // for (int x = 64, y = 35; x <= 75 && y <= 45; x++, y++)
  // {
  //   display.drawPixel(x, y, SSD1306_WHITE);
  // }

  // display.display();
}


// =============================================================
// Bouncing Ball Variables
// =============================================================

// int y = 0;
// int direction = 1;


void loop()
{
  // ===========================================================
  // 3.9 Pixel/Circle Moving Across the Screen
  // ===========================================================

  // for (int x = 0; x <= 127; x++)
  // {
  //   display.clearDisplay();
  //   display.fillCircle(x, 32, 3, SSD1306_WHITE);
  //   display.display();
  //   delay(10);
  // }


  // ===========================================================
  // 3.10 Bouncing Ball
  // ===========================================================

  // display.clearDisplay();
  // display.fillCircle(64, y, 3, SSD1306_WHITE);
  // display.display();

  // delay(2);

  // y = y + 15 * direction;

  // if (y >= 64)
  // {
  //   direction = -1;
  // }

  // if (y <= 0)
  // {
  //   direction = 1;
  // }
}