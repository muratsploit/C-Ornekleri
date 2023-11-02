//Ekrana piramit sekli bastiran program

#include <stdio.h>

int main(){

    int i,j,satir;

    printf("Satir sayisini girin: ");
    scanf("%d",&satir);

    for(i=1;i<=satir;i++){
        for (j=i;j<satir;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}