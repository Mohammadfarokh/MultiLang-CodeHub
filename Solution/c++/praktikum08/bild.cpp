#include "bild.h"

Bild::Bild(char* title, int jahr, char* ort): Medium(title, jahr), ort{ort}{}

void Bild::set_Ort(char* ort){
    ort = ort;
}
void Bild::druckDaten(){
    std::cout << "ID = " << get_ID() << "\"" << get_Title() << "\"" << " aufgenommen im Jahr" << get_Jahr() << " in " << get_Ort() << std::endl;   
}