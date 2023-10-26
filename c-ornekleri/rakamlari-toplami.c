//Disaridan girilen bir sayının rakamları toplamını
//bulan program

#include <stdio.h>

int main(){

    int sayi,ilksayi,toplam=0,i;
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);

    while(sayi>0){
        i=sayi%10;
        toplam+=i;
        sayi=sayi/10;
    
    }
    printf("Sayinin rakamlari toplami: %d\n",toplam);


    return 0;
}