#include <stdio.h>

int array[2];
int size = 0;
int tail = -1;
int head = -1;
int max = 2;


void enqueue(int i){
    if (size != max){
        tail++;
        tail %= max;
        array[tail]=i;
        size++;
    }
    else{
        array[tail] = i;}
}

int dequeue(){
    int x;
    if(size > 0){
        head++;
        head %= max;
        x = array[head];
        size--;
        return x;
    }
    return -1;
}

void main(){
    enqueue(1);
enqueue(2);
enqueue(2);
printf("%i ", dequeue());
enqueue(3);
printf("%i ", dequeue());
printf("%i ", dequeue());
printf("%i ", dequeue());
enqueue(4);
enqueue(5);
printf("%i ", dequeue());
printf("%i \n", dequeue());
}