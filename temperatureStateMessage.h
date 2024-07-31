bool temperatureStateGerman(int language){
  if(language == 2){
    printf("Temperatur außerhalb des zulässigen Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool temperatureStateEnglish(int language){
  if(language == 1){
    printf("Temperature out of range!\n");
    return true;
  }
  return temperatureStateGerman(language);
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

