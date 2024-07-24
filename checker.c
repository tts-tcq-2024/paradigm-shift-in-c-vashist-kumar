#include <stdio.h>
#include <assert.h>
#include "printMessage.h"

int tempcheck(float temperature,int language){
    if(temperature < 0 || temperature > 45){
        displayTemperature(language);
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
