#include <stdio.h>

bool displayChargeRateGerman(int language){
  if(language == 2){
    printf("Laderate außerhalb des Bereichs!\n");
    return true;
  }
  //addition of language is possible in future here
}

bool dispalyChargeRate(int language){
  if(language == 1){
    printf("Charge Rate out of range!\n");
    return true;
  }
  displayChargeRateGerman(language);
}