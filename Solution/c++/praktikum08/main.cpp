#include <iostream>
#include "bild.h"
#include "audio.h"

int main(){
    Medium *p[2];
    p[0] = new Audio{"It Means Nothing", 2007, "Stereophonics", 229};
    p[1] = new Bild{"Bebaeude FB Informatik", 2022, "Dortmund"};
    p[0]->druckDaten();
    p[1]->druckDaten();
    return 0;
}