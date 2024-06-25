#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return 0;
  }
  return 1;
}

int main() {
  assert(!batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(5, 85, 0));
}
