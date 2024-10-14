#include <stdio.h>

int einmaleinscode(int a, int b){

     int array [10][(b-a)];
     int x=a;

        for(int i=0;i<10; i++){


            int y=0;
            printf("\n");

                for(int j=0; j<=(b-a);j++){
                array[i][j]=x+y;

                 y=y+i+1;
                printf(" %d ",array[i][j]);
            }


          x+=a;


        }

     }