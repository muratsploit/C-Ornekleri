//Basit pointeer ornegi-4

#include <stdio.h>

int main(){

    char dizi[100]="Hello,World!";
    char *p1;

    p1=dizi;
    
    printf("5. karakter %c'dir\n",dizi[4]);
    printf("5. karakter %c'dir\n",*(p1+4));



    return 0;
}