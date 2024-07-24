#include <stdio.h>

bool displayTemperatureGerman(int language){
  if(language == 2){
    printf("Laderate außerhalb des Bereichs!\n");
    return true;
  }
  //addition of language is possible in future here
}

bool dispalyTemperature(int language){
  if(language == 1){
    printf("Charge Rate out of range!\n");
    return true;
  }
  displayTemperatureGerman(language);
}
