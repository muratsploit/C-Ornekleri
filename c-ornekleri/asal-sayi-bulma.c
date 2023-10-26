//Asal sayı bulma

#include <stdio.h>

int main(){
    int i,sayi;
    
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);

    for (i=2;i<sayi;i++){
        if (sayi%i==0){
            printf("Sayi asal degil\n");
            return 0;
            break;
        }

    }
    printf("Sayi asal!\n");




    return 0;
}