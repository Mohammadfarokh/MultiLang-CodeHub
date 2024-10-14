#include "linkedlist.h"
#include <iostream>


void work(const char* t){
        t = "work";
    }

void ausgabe(const char* text){
    std::cout << text << std::endl;
}

int main(){
    /*linkedlist *l = new linkedlist{};
    std::cout << l->append("Hello") << std::endl;
    std::cout << l->append("wow") << std::endl;
    std::cout << l->append("say") << std::endl;
    std::cout << l->insert("hey", 1) << std::endl;
    //std::cout << l->remove(4) << std::endl;
    //std::cout << l->remove(0) << std::endl;
    std::cout << l->get(0) << std::endl;
    std::cout << l->get(2) << std::endl;
    std::cout << l->index_of("aaa") << std::endl;
    std::cout << l->index_of("Hello") << std::endl;
    std::cout << l->index_of("wow") << std::endl;
    std::cout << l->index_of("say") << std::endl;
    std::cout << l->first() << std::endl;
    std::cout << l->last() << std::endl;
    //std::cout << l->get(7) << std::endl;
    l->print();
    l->visit_all(work);
    l->print();
    //std::cout << l->insert("hay", 3) << std::endl;
    //stad::cout << l->remove(2) << std::endl;*/
    /*using namespace std;
    linkedlist liste;
    liste.append("Element 1");
    liste.insert("Element 2", 2);
    liste.append("Element 3");
    linkedlist liste2 = liste;
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    liste.remove(2);
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    cout << "Liste2:" << endl;
    liste2.visit_all(ausgabe);*/
    using namespace std;     
    linkedlist liste;     
    liste.append("Element 1");     
    liste.insert("Element 2", 2);     
    liste.append("Element 3");     
    linkedlist liste2 = liste;     
    cout << "Liste:" << endl;     
    liste.visit_all(ausgabe);     
    liste.remove(2);     
    cout << "Liste:" << endl;     
    liste.visit_all(ausgabe);     
    cout << "Liste2:" << endl;     
    liste2.visit_all(ausgabe);  
    cout << "ende!" << endl;    

    return 0;

    return 0;

    }