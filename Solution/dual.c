#include <stdio.h>
#include <math.h>

int dual(int x){
    if ( x>65535){
        printf("Die Eingabe ist falsch");
        return 0;
    }
    for (int c = 16; c >= 0; c--)
  {
    int k = x >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");
}