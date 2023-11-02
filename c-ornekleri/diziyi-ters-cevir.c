//Dizi elemanlarini ters cevirme

#include <stdio.h>
#define MAKS 100


int main(){

    int dizi[MAKS];
    int boyut,i;

    printf("Dizinin boyutunu girin: ");
    scanf("%d",&boyut);

    for(i=0;i<boyut;i++){
        printf("Dizinin [%d]. elemanini girin: ",i);
        scanf("%d", &dizi[i]);
    }

    for (i=boyut-1;i>=0;i--){
        printf("%d ",dizi[i]);

    }




    return 0;
}