//Sayiyi Tersten Yazdiran Ornek

#include <stdio.h>
int main(){
    int sayi,ters=0,kalan=0; 
    printf("Bir sayi giriniz : "); 
    scanf("%d",&sayi);

    while(sayi > 0){
        kalan = sayi % 10;
        ters = ters * 10 + kalan;
        sayi = sayi / 10;
    }

    printf("Girdiginiz sayinin tersi : %d\n", ters);
}