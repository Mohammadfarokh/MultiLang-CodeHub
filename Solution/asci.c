#include<stdio.h>;


char asciicode(int s){
    int x=32;
     char array [(94/s)+1][s];
for(int i=0;i<(94/s)+1;i++){
    for(int j=0; j<s;j++){
        if(x<=126){
        array[i][j]=x,(char)x;
         printf("%d %c",array[i][j],array[i][j]);
         x++;
        }
    }
}
return array;
}