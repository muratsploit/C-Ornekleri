//Ekrana sayilarla yarim piramit yazdirma

#include <stdio.h>

int main(){

    int i,j,satir;
    printf("Satir sayisi girin: ");
    scanf("%d",&satir);

    for (i=1;i<=satir;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");

    } 

return 0;

}