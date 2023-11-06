//100’den 110’a kadar sayıları bir diziye, 
//karelerini farklı bir diziye ekleyen daha sonra 
//bu dizilerin elemanlarını yazdıran yazdıran kod

#include <stdio.h>

void main(){

    int i,j;
    int dizi[10];
    int kare[10];

    for (i=0;i<10;i++){
        dizi[i]=i+100;
        kare[i]=dizi[i]*dizi[i];
    }

    for(i=0;i<10;i++){
        printf("%d'nin karesi: ",dizi[i]);
        printf("%d\n: ",kare[i]);
    }






}