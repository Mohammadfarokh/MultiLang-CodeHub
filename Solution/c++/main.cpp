#include "stack.h"
#include <iostream>

void foo(stack *s){

}

int main(){
    stack *s = new stack{};
    
    for (int i = 1; i <= 10; i++){
            s->push(1.0 * i);
    }
    foo(s);
    //std::cout << t.pop() << std::endl;

    //std::cout << s.pop() << std::endl;

    return 0;
}