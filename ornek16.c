//girilen 5 sayıdan en kucugunu bulan program
#include <stdio.h>

int main(){

    int sayi1,sayi2=0,i,enbuyuk;

    for(i=0;i<5;i++){
        printf("Bir sayi girin: ");
        scanf("%d",&sayi1);
        if (sayi1>sayi2){
            enbuyuk=sayi1;
            sayi2=sayi1;
        }
        else{
            enbuyuk=sayi2;
        }
    }
    printf("Girdiginiz sayilardan en buyugu: %d\n",enbuyuk);


    return 0;
}