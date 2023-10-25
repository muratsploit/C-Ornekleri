//fibonacci hesaplayan program

#include <stdio.h>
int main(){

int i, ilksayi=0,ikincisayi=1,toplam,terim,gecici;

printf("Terim sayisini girin: ");
scanf("%d",&terim);

printf("Fibonacci Dizisi: ");

for(i=1;i<=terim;i++){
    
    printf("%d ",ilksayi);
    gecici=ikincisayi;
    toplam=ilksayi+ikincisayi;
    ikincisayi=toplam;
    ilksayi=gecici;

}

}