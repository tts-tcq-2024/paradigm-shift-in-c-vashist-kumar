#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
bool dispalyTemperature(int language);
bool displayTemperatureGerman(int language);
bool displaySocGerman(int language);
bool displaySoc(int language);
bool displayChargeRateGerman(int language);
bool displayChargeRate(int language);

bool displayTemperatureGerman(int language){
  if(language == 2){
    printf("Temperatur außerhalb des zulässigen Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool dispalyTemperature(int language){
  if(language == 1){
    printf("Temperature out of range!\n");
    return true;
  }
  return displayTemperatureGerman(language);
}

bool displaySocGerman(int language){
  if(language == 2){
    printf("Ladezustand außerhalb des Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool displaySoc(int language){
  if(language == 1){
    printf("State of Charge out of range!\n");
    return true;
  }
  return displaySocGerman(language);
}

bool displayChargeRateGerman(int language){
  if(language == 2){
    printf("Laderate außerhalb des Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool displayChargeRate(int language){
  if(language == 1){
    printf("Charge Rate out of range!\n");
    return true;
  }
  return displayChargeRateGerman(language);
}

int tempcheck(float temperature,int language){
    if(temperature < 0 || temperature > 45){
        dispalyTemperature(language);
        return 0;
    }
    return 1;
}
int soccheck(float soc,int language){
    if(soc < 20 || soc > 80){
        displaySoc(language);
        return 0;
    }
    return 1;
}
int chargecheck(float chargeRate,int language){
    if(chargeRate > 0.8){
         displayChargeRate(language);
        return 0;
    }
    return 1;
}


int batteryIsOk(float temperature, float soc, float chargeRate, int language) {
   return tempcheck(temperature,language) && soccheck(soc,language) && chargecheck(chargeRate,language);
}

int main() {
    assert(batteryIsOk(25, 70, 0.7,1));
    assert(batteryIsOk(25, 70, 0.7,2));
    assert(!batteryIsOk(50, 85, 0,1));
}
