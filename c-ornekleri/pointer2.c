//Basit pointer ornegi-2

#include <stdio.h>

int main(){

    int *ad, *ad1, *ad2;
    int a=10, b=20;

    ad1=&a;
    ad2=&b;

    printf("Atamadan once ad1 degeri: %d\n", *ad1);
    *ad1=*ad2+2;
    printf("Atamadan sonra ad1 degeri: %d\n", *ad1);



    return 0;
}