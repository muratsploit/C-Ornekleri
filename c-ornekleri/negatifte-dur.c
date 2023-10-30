/*
Klavyeden ardı ardına girilen sayıları toplayan ve 
girilen sayı negatif olduğunda duran program
*/

#include <stdio.h>

int main(){

    int i=0;
    int sayi=0, toplam=0;
    while (i<1){
        printf("Bir sayi girin: ");
        scanf("%d",&sayi);
        if (sayi>=0){
            toplam+=sayi;
        }
        else{
            i=1;
        }
    }
    printf("Toplam: %d\n",toplam);


    return 0;
}