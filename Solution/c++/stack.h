#include <iostream>
class stack{
    private:
        struct element
        {
            /* data */
            double key;
            element *next;
            ~element(){
                std::cout << "Destruktor" << key << std::endl;
            }
            element(double key, element *next) : key {key}, next {next} {}
        };
        element *top;
        
    public:
        stack();
        ~stack();
        stack(const stack& orig);
        int push(double key);
        double pop();
};