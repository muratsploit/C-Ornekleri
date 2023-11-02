//Dizilerle kareee alma ornegi
#include <stdio.h>

int main(){

    int i, kare[10];

    for (i=0;i<10;i++){
        kare[i]=i*i;
        printf("kare[%d]: %d\n",i,kare[i]);
    }
    return 0;
}