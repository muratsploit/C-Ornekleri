/*
İlk 10 asal sayiyi diziye ekleyen kod
*/
#include <stdio.h>



void main(){

int asalsayilar[10];
int i,j,k=0,toplam=0;

for(i=2;i<200;i++){
    for(j=1;j<=i;j++){
        if(i%j==0){
            toplam++;
        }

    }
    if (toplam==2){
    toplam=i;

    printf("%d. asal sayi: %d\n",k+1,toplam);

    asalsayilar[k]=toplam;
    k+=1;
    if(k==10){
        break;
        }
    }
    toplam=0;
}









}