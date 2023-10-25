//Asal sayi bulma fonksiyonu

#include <stdio.h>

int asal_mi(int x){

    int i;
    for (i=2; i<x; i++){
        if (x % i == 0){
            printf("Sayi asal degil!\n");
            return 0;
            break;
        }
    }
    printf("Sayi asal!\n");
    
}

int main(){

    int sayi;
    printf("Asal olup olmadigini merak ettiginiz sayi: ");
    scanf("%d",&sayi);
    asal_mi(sayi);

    return 0;
}