#include <Arduboy2.h>
#include "arduboy.h"

Arduboy2 arduboy;

void Arduboy_begin()
{
  arduboy.begin();
}

void Arduboy_beginNoLogo()
{
  arduboy.boot();
  arduboy.display();
  arduboy.flashlight();
  arduboy.systemButtons();
  arduboy.audio.begin();
  arduboy.waitNoButtons();
}

void Arduboy_clear()
{
  arduboy.clear();
}

bool Arduboy_nextFrame()
{
  return arduboy.nextFrame();
}

void Arduboy_setCursor(int x, int y)
{
  arduboy.setCursor(x, y);
}

void Arduboy_print(char **str)
{
  arduboy.print(*str);
}

void Arduboy_display()
{
  arduboy.display();
}

void Arduboy_drawRect(int16_t x, int16_t y, uint8_t w, uint8_t h, bool isWhite)
{
  arduboy.drawRect(x, y, w, h, isWhite ? WHITE : BLACK);
}

void Arduboy_fillRect(int16_t x, int16_t y, uint8_t w, uint8_t h, bool isWhite)
{
  arduboy.fillRect(x, y, w, h, isWhite ? WHITE : BLACK);
}

unsigned long Arduboy_genRandSeed()
{
  return arduboy.generateRandomSeed();
}

void Arduboy_drawBitmap(int16_t x, int16_t y, const uint8_t *bmp, uint8_t w, uint8_t h)
{
  arduboy.drawBitmap(x, y, bmp, w, h);
}