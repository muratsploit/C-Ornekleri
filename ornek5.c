//Girilen uc sayidan buyuk ve kucuk olanlari bulan
//program

#include <stdio.h>

int main(){

    int sayi1,sayi2,sayi3;
    printf("İlk sayiyi girin: ");
    scanf("%d",&sayi1);
    printf("İkinci sayiyi girin: ");
    scanf("%d",&sayi2);
    printf("Ucuncu sayiyi girin: ");
    scanf("%d",&sayi3);

    if(sayi1>sayi2&&sayi1>sayi3){
        printf("En buyuk sayi: %d\n",sayi1);
    }
    else if(sayi2>sayi1&&sayi2>sayi3){
        printf("En buyuk sayi: %d\n",sayi2);
    }
    else {
        printf("En buyuk sayi: %d\n",sayi3);
    }

    if(sayi1<sayi2&&sayi1<sayi3){
        printf("En kucuk sayi: %d\n",sayi1);
    }
    else if(sayi2<sayi1&&sayi2<sayi3){
        printf("En kucuk sayi: %d\n",sayi2);
    }
    else {
        printf("En kucuk sayi: %d\n",sayi3);
    }



    return 0;
}