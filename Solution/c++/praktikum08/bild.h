#include "medium.h"

class Bild : public Medium{
    private:
        char* ort;

    public:
        Bild(char* title, int jahr, char* ort);
        void set_Ort (char* ort);
        char* get_Ort(){
            return ort;
        }
       void druckDaten();
  


};