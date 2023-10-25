//Girilen iki sayi arasındaki her bir sayinin
//karesini ekrana yazdiran program
#include <stdio.h>
int main(){
    int sayi1,sayi2,i,sonuc;
    printf("İlk sayiyi girin: ");
    scanf("%d",&sayi1);
    printf("İkinci sayiyi girin: ");
    scanf("%d",&sayi2);

    for (i=sayi1+1;i<sayi2;i++){
        sonuc=i*i;
        printf("%d'nin karesi: %d\n",i,sonuc);
    }

    return 0;
}