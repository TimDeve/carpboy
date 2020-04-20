#include <Arduboy2.h>
#include <Sprites.h>

#include "arduboy.h"

Arduboy2 arduboy;
Sprites sprites;

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

void Arduboy_initRandSeed()
{
  arduboy.initRandomSeed();
}

unsigned long Arduboy_genRandSeed()
{
  return arduboy.generateRandomSeed();
}

void Arduboy_setFrameRate(int frameRate)
{
  arduboy.setFrameRate(frameRate);
}

void Arduboy_drawBitmap(int16_t x, int16_t y, const uint8_t *bmp, uint8_t w, uint8_t h)
{
  arduboy.drawBitmap(x, y, bmp, w, h);
}

void Arduboy_pollButtons()
{
  arduboy.pollButtons();
}

bool Arduboy_upPressed()
{
  return arduboy.pressed(UP_BUTTON);
}

bool Arduboy_upJustPressed()
{
  return arduboy.justPressed(UP_BUTTON);
}

bool Arduboy_rightPressed()
{
  return arduboy.pressed(RIGHT_BUTTON);
}

bool Arduboy_rightJustPressed()
{
  return arduboy.justPressed(RIGHT_BUTTON);
}

bool Arduboy_downPressed()
{
  return arduboy.pressed(DOWN_BUTTON);
}

bool Arduboy_downJustPressed()
{
  return arduboy.justPressed(DOWN_BUTTON);
}

bool Arduboy_leftPressed()
{
  return arduboy.pressed(LEFT_BUTTON);
}

bool Arduboy_leftJustPressed()
{
  return arduboy.justPressed(LEFT_BUTTON);
}

bool Arduboy_aPressed()
{
  return arduboy.pressed(A_BUTTON);
}

bool Arduboy_aJustPressed()
{
  return arduboy.justPressed(A_BUTTON);
}

bool Arduboy_bPressed()
{
  return arduboy.pressed(B_BUTTON);
}

bool Arduboy_bJustPressed()
{
  return arduboy.justPressed(B_BUTTON);
}

void Arduboy_drawOverwrite(int16_t x, int16_t y, const uint8_t *bitmap, uint8_t frame)
{
  sprites.drawOverwrite(x, y, bitmap, frame);
}

void Arduboy_drawSelfMasked(int16_t x, int16_t y, const uint8_t *bitmap, uint8_t frame)
{
  sprites.drawSelfMasked(x, y, bitmap, frame);
}