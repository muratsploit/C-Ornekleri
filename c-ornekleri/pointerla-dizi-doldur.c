//pointerla diziyi doldurup bastırmak
#include <stdio.h>

void main(){

    int dizi[5];
    int sayi;
    int* ptr;

    ptr=dizi;

    for(int i=0;i<5;i++){
        printf("%d.sayiyi girin: ",i+1);
        scanf("%d",&sayi);
        ptr[i]=sayi;
    }

    for(int i=0; i<5; i++){
        printf("Dizinin %d.ci elemani: %p\n",i+1,ptr[i]);

    }






}