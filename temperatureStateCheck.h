int tempcheck(float temperature,int language){
    if(temperature < 0 || temperature > 45){
        temperatureStateMessage(language);
        return 0;
    }
    return 1;
}
