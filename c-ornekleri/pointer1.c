//Kolay pointer ornegi

#include <stdio.h>

int main(){

    int x=10;
    int *p=&x;

    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%d\n",x);
    printf("%p\n",&x);

    int *sayi;
    int a;
    sayi=&a;

    printf("%d\n",*sayi);
    printf("%p\n",sayi);
    printf("%d\n",a);
    printf("%p\n",&a);

    return 0;
}