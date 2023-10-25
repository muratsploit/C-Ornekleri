//Klavyeden girilen iki sayının toplamının
//karesinin ve küpünün bulunması
#include <stdio.h>

int main(){

    int sayi1,sayi2,toplam=0;
    printf("İlk sayiyi girin: ");
    scanf("%d",&sayi1);
    printf("İkinci sayiyi girin: ");
    scanf("%d",&sayi2);
    
    toplam=sayi1+sayi2;
    
    printf("Sayinin toplaminin karesi: %d\n",toplam*toplam);
    printf("Sayinin toplaminin karesi: %d\n",toplam*toplam*toplam);


    return 0;
}