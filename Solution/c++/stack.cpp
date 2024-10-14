#include "stack.h"

stack::stack() : top{nullptr} {}

stack::~stack(){
    while(pop() != -1);
}

stack::stack(const stack &orig) : stack{}{
    stack tmp;
    element *e = orig.top;
    while(e != nullptr){
        tmp.push(e->key);
        e = e->next;
    }
    double k;
    while((k=tmp.pop()) != -1.0){
        push(k);
    }
}

int stack::push(double key){
    element *neu = new element{key, top};
    if(neu){
        top = neu;
        return 1;
    } else {
        return 0;
    }
}

double stack::pop(){
    if(top){
        double k = top->key;
        element *tmp = top;
        top = top->next;
        delete tmp;
        return k;
    } else{
        //ToDo exception 
        return -1;
    }
}