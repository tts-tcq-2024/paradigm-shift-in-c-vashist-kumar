
bool socStateGerman(int language){
  if(language == 2){
    printMessage("Ladezustand außerhalb des Bereichs!");
    return true;
  }
  return false;//addition of language is possible in future here
}

bool socStateMessage(int language){
  if(language == 1){
    printMessage("State of Charge out of range!");
    return true;
  }
  return socStateGerman(language);
}
