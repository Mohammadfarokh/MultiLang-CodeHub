#include "linkedlist.h"
#include <cstddef>
#include <iostream>
#include <string.h>

/*linkedlist::linkedlist() :  anfang{nullptr}, head{nullptr} {}

int linkedlist::append(const char* text){
    
   /* if(head == NULL){
        anfang = new element{nullptr, text, nullptr};
        head = anfang;
        //head = new element{text,nullptr};
        anfang->next = head;
        //head = neu;
        return 1;
    } else{
        element* neu = new element{text, head};
        //head->next = neu;
        //head = head->next;
        head = neu;
        return 1;
    }*//*
    if(anfang == NULL){
        element* neu = new element{nullptr, text, nullptr};
        anfang = neu;
        head = neu;
        return 1;
    } else{
        element* neu = new element{head, text, nullptr};
        head->next = neu;
        head = neu;
        return 1;
    }
    return 0;
}

int linkedlist::insert(const char *text, int p){
    if(anfang = NULL){
        linkedlist::append(text);
  {}      return 0;
    }
    element* temp = anfang;
    /*while(temp->next != NULL){
        temp = temp->next;
    }*//*
    for(int i=1; i<p; i++){
        if(temp->next == NULL){
            linkedlist::append(text);
            return 0;
        }else{
        temp = temp->next;
        }
  {}  }
    element* neu = new element{temp, text, temp->next};
    temp->next = neu;
    temp = temp->next->next;
    temp->befor = neu;
    /* if(head == neu){
      head = head->next;
    }*/
    //delete temp;/*
    /*return 1;
}

int linkedlist::remove(int p){
    if (anfagn == NULL){
        return 0;
    }
    element *temp = anfang;
    for (int i =1; i<p; i++){
        if (temp->next->next == NULL){
            element *temp2 = temp->next;
            temp->next = nullptr;
            temp2->befor = nullptr;
            head = temp;
            delete temp2;
            return 1;
        }
    }
    temp->next->next->befor = temp;
    temp->next = temp->next->next;
    return 1;
    //temp->next->next = nullptr;
    //temp->next->befor = nullptr;
}*/
//Iterator* it = new iterator();
bool linkedlist::ListIterator:: hasnext(){
    return pointer->next!=nullptr;
}
const char* linkedlist::ListIterator:: next(){
   return pointer->next->text;
  
}
linkedlist::ListIterator linkedlist::ListIterator::operator++(){
        pointer = pointer->next;
        return *this;
}
bool linkedlist::ListIterator::operator!=(ListIterator it){
    return this->pointer->text!=it.pointer->text;
}

linkedlist::linkedlist() : anfang{nullptr}, anz{0} {}

linkedlist::linkedlist(const linkedlist& org){
    anfang = nullptr;
    anz = org.anz;
    element *tmp = org.anfang;
    if(tmp != nullptr){
        linkedlist::append(tmp->text);
            }
    while(tmp->next != nullptr){
        tmp = tmp->next;
        linkedlist::append(tmp->text);
    }
}

linkedlist::~linkedlist(){
    element *tmp;
    while(anfang->next != nullptr){
        tmp = anfang;
        anfang = anfang->next;
        std::cout << tmp->text << std::endl;
        delete tmp;
        }
    tmp = anfang;
    std::cout << tmp->text << std::endl;
    delete anfang;    
}

int linkedlist::append(const char* text){
    

    if(anfang == NULL){
        element* neu = new element{nullptr, text};
        if(neu){
        anfang = neu;
        return 1;
        }
    } else{
        element *temp = anfang;
        while(temp->next != nullptr){
          temp = temp->next;
        }
        element* neu = new element{nullptr, text};
        if(neu){
        temp->next = neu;
        return 1;
        }
    }
    return 0;
}

int linkedlist::insert(const char *text, int p){
    if(anfang == nullptr){
        linkedlist::append(text);
        return 1;
    }
    element* temp = anfang;

    for(int i=1; i<p; i++){
        if(temp->next == nullptr){
            linkedlist::append(text);
            return 1;
        }else{
        temp = temp->next;
        }
    }
    element* neu = new element{temp->next, text};
    temp->next = neu;
    return 1;
}

int linkedlist::remove(int p){
    if(anfang == NULL){
        return anz;
    }
    if(p == 0){
        element *to_delet = anfang; 
        anfang = anfang->next;
        delete to_delet;
        anz++;
        return anz;
    }
    element *temp = anfang;
    for (int i = 1; i<p; i++ ){
        if(temp->next->next != NULL){
            temp = temp->next;
        }else{
            element *to_delet = temp->next;
            temp->next = nullptr;
            anz++;
            delete to_delet;
            return anz;
        }
    }
    element *to_delet = temp->next;
    temp->next = temp->next->next;
    delete to_delet;
    anz++;
    return anz;
}

const char *linkedlist::get(int p){
    if(anfang == NULL){
        return nullptr;
    }
     element *temp = anfang;
     for (int i = 0; i<p; i++ ){
        if(temp->next != NULL){
            temp = temp->next;
        }else{
            return nullptr;
        }
    }
    return temp->text;
}

int linkedlist::index_of(const char *text){
    if (anfang == nullptr){
        return -1;
    }
    int zaehler = 0;
    element *temp = anfang;
    if(strcmp(temp->text, text) == 0){
        return zaehler;
    }
    while(temp->next != nullptr){
        temp = temp->next;
        zaehler++;
        if(strcmp(temp->text, text) == 0){
        return zaehler;
        }
    }
    return -1;

}

const char *linkedlist::last(){
    if(anfang == nullptr){
        return nullptr;
    }
    element *temp = anfang;
    if(temp->next == nullptr){
        return temp->text;
    }
    while(temp->next != nullptr){
        temp = temp->next;
    }
        return temp->text;
}
void linkedlist::print(){
     element *temp= anfang;
     while(temp!=nullptr){
        std::cout<<temp->text<<std::endl;

        temp=temp->next;
     }
}

void linkedlist::visit_all(void (*work)(const char* t)){
    if(anfang == nullptr){
        //return nullptr;
       // break;
    }
    element *temp = anfang;
    const char* k = temp->text;
    work(k);
    while(temp->next != nullptr){
        temp = temp->next;
        k = temp->text;
        work(k);
    }

}

