//pointerla toplama işlemi
#include <stdio.h>

void main(void){

int sayi1=5;
int sayi2=10;
int* ptr1;
int* ptr2;

ptr1=&sayi1;
ptr2=&sayi2;

printf("Toplam: %d\n",*ptr1+*ptr2);





}