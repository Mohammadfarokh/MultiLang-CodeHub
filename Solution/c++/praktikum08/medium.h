#include <iostream>
#if !defined(MEDIUM_H_)
#define MEDIUM_H_


// MEDIUM_H_



class Medium{
    private:
        static int zaehler ;
        const int id = zaehler;
        char* title;
        int jahr;

    public:
        Medium (char* title, int jahr);
        void set_Title (char* title);
        char* get_Title(){
            return title;
        }
        int get_ID(){
            return id;
        }

        void set_Jahr (int jahr);
        int get_Jahr(){
            return jahr;
        }
        int alter();
        virtual void druckDaten() = 0; 
};
#endif 