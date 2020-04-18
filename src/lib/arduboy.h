#pragma once

#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C"
{
#endif

  void Arduboy_begin();
  void Arduboy_beginNoLogo();
  void Arduboy_clear();
  bool Arduboy_nextFrame();
  void Arduboy_setCursor(int x, int y);
  void Arduboy_print(char **str);
  void Arduboy_display();
  void Arduboy_drawRect(int16_t x, int16_t y, uint8_t w, uint8_t h, bool isWhite);
  void Arduboy_drawBitmap(int16_t x, int16_t y, const uint8_t *bmp, uint8_t w, uint8_t h);
  void Arduboy_fillRect(int16_t x, int16_t y, uint8_t w, uint8_t h, bool isWhite);
  unsigned long Arduboy_genRandSeed();

#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif
