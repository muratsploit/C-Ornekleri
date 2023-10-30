//verilen sayiyi 3 tahminde bulma oyunu

#include <stdio.h>

int main(){

    int gizli_sayi=11;
    int tahmin;
    int tahmin_hakki=3;
    printf("Tahmin oyununa hosgeldiniz.\n");
    for(int i=tahmin_hakki--;i>=0;i--){
        printf("1-50 arasinda bir sayi tahmin edin: ");
        scanf("%d",&tahmin);
        if (i==0){
            printf("Tahmin hakkiniz tukendi, oyun bitti!\n");
            break;
        }
        if (tahmin==gizli_sayi){
            printf("Bildiniz.\n");
            break;
        }
        else{
            printf("Bilemediniz, yeniden deneyin.\nKalan tahmin hakki: %d\n",i);
        
        }
    }


    return 0;
}