#include "medium.h"


class Audio : public Medium{
    private:
        char* interpret;
        int dauer;

    public:
        Audio(char* title, int jahr, char* interpret, int dauer);
        void set_Inter (char* inter);
        char* get_Inter(){
            return interpret;
        }
        void set_Dauer (int dauer);
        int get_Dauer(){
            return dauer;
        }
        void druckDaten();



};