#include "printMessage.h"

bool temperatureStateGerman(int language){
  if(language == 2){
    printf("Temperatur außerhalb des zulässigen Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool temperatureStateMessage(int language){
  if(language == 1){
    printf("Temperature out of range!\n");
    return true;
  }
  return temperatureStateGerman(language);
}




