#include <stdio.h>
#include <string.h>
#include "uppercase.h"

void upper(char text[]){
    int i = 0;
    for (i; text[i] != '\0'; i++){
        if(text[i]>= 97 && text[i]<= 122){
        text[i] = uppercase(text[i]);
        printf("%c",text[i]);
            }
        else{
            printf("%c",text[i]);
        }
    }
}

void main(){
    char t[]="asdf7!jk";
    upper(t);
}
