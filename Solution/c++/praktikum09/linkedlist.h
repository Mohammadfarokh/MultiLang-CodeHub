#include<iostream>

class Iterator{
    public:
        virtual bool hasnext() = 0;
        virtual const char* next() = 0;

};


class linkedlist{
    private:
        struct element{
            element *next;
            const char* text;
            element(element *next, const char* text) : next{next}, text {text} {}
        };
    public: 
        class ListIterator : public Iterator{
        private:
            element *pointer;
        public:
           bool hasnext();
           const char* next();
           friend class linkedlist;
           ListIterator operator++();
           bool operator!=(ListIterator it);
        };
        element *anfang;
        int anz;
        

    public:
    linkedlist();
    linkedlist (const linkedlist& org);
    ~linkedlist();
    int append(const char* text);
    int insert(const char* text, int p);
    int remove(int p);
    const char *get(int p);
    int index_of(const char *text);
    const char *first(){
        if(anfang != nullptr){
        return anfang->text;
        }
        return nullptr;
    }
    const char *last();
    void visit_all(void (*work)(const char* t));
    void print();
};

/*class linkedlist{
    private:
    
        struct element{
            element *befor;
            const char* text;
            element *next;
            element(element *befor, const char* text, element *next) : befor{befor}, text {text}, next {next} {}
        };

    element *anfang; 
    element *head;

    public:
    linkedlist();
    int append(const char* text);
    int insert(const char* text, int p);
    int remove(int p);
    const char *get(int p);
    int index_of(int p);
    const char *first();
    const char *last();
    void visit_all(void (*work)(const char* t));
};*/