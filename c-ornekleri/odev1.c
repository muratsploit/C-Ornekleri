//Kullanıcıdan vize ve final notlarını alıp yıl sonu notu hesaplayan program
#include <stdio.h>

void main(){
    printf("Merhaba Kullanici\n\n");
    float vizeagirligi, finalagirligi;
    float vizenotu, finalnotu;
    float yilsonunotu;
    int secim;
    int i=0;
    
    while(i<1){
        printf("Vize agirligini girin(30-70 arasi): ");
        scanf("%f",&vizeagirligi);
        printf("Final agirligini girin(30-70 arasi): ");
        scanf("%f",&finalagirligi);
        if(vizeagirligi<30 || vizeagirligi>70 || finalagirligi<30 || finalagirligi>70){
            printf("Vize veya final agirligini yanlis girdiniz!\n\n");
            continue;
        }
        else{
            printf("Vize notunuzu girin: ");
            scanf("%f",&vizenotu);
            printf("Final notunuzu girin: ");
            scanf("%f",&finalnotu);
            yilsonunotu=vizenotu*(vizeagirligi/100)+finalnotu*(finalagirligi/100);
            printf("\nYil sonu notunuz: %.2f\n\n", yilsonunotu);
            printf("Yeniden hesaplama yapmak istiyorsaniz 0'a, cikmak icin ise 1'e basin: ");
            scanf("%d",&secim);
            if (secim==0){
                continue;
            }
            else{
                i=1;
            }
        }
    }

}