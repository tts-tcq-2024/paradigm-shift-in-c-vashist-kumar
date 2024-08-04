#include "printMessage.h"
#include "batteryStateMessage.h"

bool temperatureStateMessage(int language){
  printMessage(&temperatureMessage[language]);
  return true;
}






