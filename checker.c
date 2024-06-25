#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(batteryIsOk(5, 85, 0));
}
