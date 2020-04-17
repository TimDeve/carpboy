#include <Arduboy2.h>
#include "arduboy.h"

Arduboy2 arduboy;

void ArduboyBegin()
{
  arduboy.begin();
}

void ArduboyClear()
{
  arduboy.clear();
}

bool ArduboyNextFrame()
{
  return arduboy.nextFrame();
}

void ArduboySetCursor(int x, int y)
{
  arduboy.setCursor(x, y);
}

void ArduboyPrint(char **str)
{
  arduboy.print(*str);
}

void ArduboyDisplay()
{
  arduboy.display();
}
