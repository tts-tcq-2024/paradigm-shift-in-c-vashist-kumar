int soccheck(float soc,int language){
    if(soc < 20 || soc > 80){
        socStateMessage(language);
        return 0;
    }
    return 1;
}
