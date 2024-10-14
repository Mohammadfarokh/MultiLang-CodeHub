#include "medium.h"

int Medium::zaehler = 0;

Medium::Medium(char* title, int jahr): title{title}, jahr{jahr}{
    zaehler++;
}

int Medium::alter(){
    return 2022 - Medium::get_Jahr();
}

void Medium::set_Title (char* title){
    title = title;
}

void Medium::set_Jahr (int jahr){
    jahr = jahr;
}



