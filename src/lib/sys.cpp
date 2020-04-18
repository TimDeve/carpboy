#include <Arduino.h>
#include "sys.h"

long Sys_randomBetween(long min, long max)
{
  return random(min, max);
}

void Sys_randomSeed(long s)
{
  randomSeed(s);
}