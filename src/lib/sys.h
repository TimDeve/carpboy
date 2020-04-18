#pragma once

#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C"
{
#endif

  long Sys_randomBetween(long min, long max);
  void Sys_randomSeed(long s);

#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif
