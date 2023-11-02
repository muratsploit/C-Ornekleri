//dizileeri kullanarak ortalama hesaplama

#include <stdio.h>

int main(){

    float ortalama=0.0;
    int sayilar[3];
    int i=0;

    while(i<3){
        printf("Bir sayi girin: ");
        scanf("%d",&sayilar[i]);
        i++;
    }
    
    
    for(i=0;i<3;i++){
        ortalama+=sayilar[i];
    }
    ortalama=ortalama/3;
    printf("Girdiginiz 3 sayinin ortalamasi: %.2f\n", ortalama);

    return 0;
}