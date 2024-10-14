#include "audio.h"
#include "iostream"

Audio::Audio(char* title, int jahr, char* interpret, int dauer): Medium(title, jahr), interpret{interpret}, dauer{dauer}{}

void Audio::set_Inter(char* inter){
    interpret = inter;
}

void Audio::set_Dauer (int dauer){
    dauer = dauer;
}
void Audio::druckDaten(){
    std::cout << "ID = " << get_ID() << "\"" << get_Title() << "\"" << " von" << get_Inter() << " aus " << get_Jahr() << " Spieldauer: " << get_Dauer() << " sek" << std::endl;   
}




