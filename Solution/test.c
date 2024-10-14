#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void strcpy2(char *duplikat,const char *original)



int main(){
char* original ="C macht Spass.";
char* duplikat (char *) malloc(sizeof(original));;
strcpy2(*duplikat,*original);
printf("%s",duplikat);

void strcpy2(char *duplikat,const char *original){
    while(*duplikat == *original){
        *duplikat = *original;
        duplikat++;
        original++;
    }
}
}

