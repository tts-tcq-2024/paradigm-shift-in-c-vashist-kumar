#include "printMessage.h"

bool chargeRateStateGerman(int language){
  if(language == 2){
    printMessage("Laderate außerhalb des Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool chargeRateStateMessage(int language){
  if(language == 1){
    printMessage("Charge Rate out of range!\n");
    return true;
  }
  return chargeRateStateGerman(language);
}
