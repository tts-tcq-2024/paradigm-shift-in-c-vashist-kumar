bool socStateGerman(int language){
  if(language == 2){
    printf("Ladezustand außerhalb des Bereichs!\n");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool socStateMessage(int language){
  if(language == 1){
    printf("State of Charge out of range!\n");
    return true;
  }
  return displaySocGerman(language);
}
