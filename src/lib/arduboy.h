#pragma once

#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C"
{
#endif

  void ArduboyBegin();
  void ArduboyClear();
  bool ArduboyNextFrame();
  void ArduboySetCursor(int x, int y);
  void ArduboyPrint(char **str);
  void ArduboyDisplay();

#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif
