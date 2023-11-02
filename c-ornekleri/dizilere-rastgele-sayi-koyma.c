#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int i,zar,kactane[7]={0,0,0,0,0,0,0};
    srand(time(NULL));
    for (i=1;i<100;i++){
        zar=rand()%6+1;
        kactane[zar]++;
        
    }

    printf("Zar Numarasi Kac Defa Geldi\n");
    for (i=1;i<7;i++){
        printf("%d\t\t%d\n",i,kactane[i]);
    }



    return 0;
}