#include "chargeRateStateMessage.h"
#include "printMessage.h"

int chargeRatecheck(float chargeRate,int language){
    if(chargeRate > 0.8){
         chargeRateStateMessage(language);
        return 0;
    }
    return 1;
}

