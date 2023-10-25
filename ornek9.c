//Klavyeden girilen x adet sayinin
//toplamını ve aritmetik ortalamasını
//bulan program

#include <stdio.h>

int main(){

    int sayi, toplam=0, ort=0,sayac=0;

    while (1){

        printf("Cikmak icin 0'a basin.\n");
        printf("Bir sayi girin: ");
        scanf("%d",&sayi);
        if (sayi==0){
            break;
        }
        else {
            sayac+=1;
            toplam+=sayi;
            ort=toplam/sayac;
        }
    }
    printf("Toplam = %d\n",toplam);
    printf("Ortalama = %d\n",ort);





    return 0;
}