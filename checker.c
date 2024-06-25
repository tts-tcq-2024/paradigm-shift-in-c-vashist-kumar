#include <stdio.h>
#include <assert.h>

int isTemperatureOutOfRange(float temperature) {
    return temperature < 0 || temperature > 45;
}

int isStateOfChargeOutOfRange(float soc) {
    return soc < 20 || soc > 80;
}

int isChargeRateOutOfRange(float chargeRate) {
    return chargeRate > 0.8;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
    if (isTemperatureOutOfRange(temperature)) {
        printf("Temperature out of range!\n");
        return 0;
    }
    if (isStateOfChargeOutOfRange(soc)) {
        printf("State of Charge out of range!\n");
        return 0;
    }
    if (isChargeRateOutOfRange(chargeRate)) {
        printf("Charge Rate out of range!\n");
        return 0;
    }
    return 1;
}

int main() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(batteryIsOk(5, 85, 0));
}
