#include "printMessage.h"
#include "batteryStateMessageList.h"

int tempcheck(float temperature,int language){
    if(temperature < 0 || temperature > 45){
        printMessage(temperatureMessage[language]);
        return 0;
    }
    return 1;
}
