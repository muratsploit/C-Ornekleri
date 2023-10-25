//Fibonacci hesaplayan program- hatalı

#include <stdio.h>

void fibo(int x){

    int i,ilksayi=1,ikincisayi=1,toplam;
    for (i=1;i<=x;i++){
        int gecici=ikincisayi;
        toplam=ilksayi+ikincisayi;
        ikincisayi=toplam;
        ilksayi=gecici;
    }
    printf("%dinci adimdaki fibonacci sayisi: %d\n",x,ilksayi);
}

int main (){

    int adim;
    printf("Fibonacci dizisinin kacinci adimi gosterilsin: ");
    scanf("%d",&adim);
    fibo(adim);


    return 0;
}