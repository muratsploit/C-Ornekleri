//Basit pointer ornegi-3

#include <stdio.h>

void degistir(int *a, int *b){
    int gecici;
    gecici=*a;
    *a=*b;
    *b=gecici;
}



int main (){

    int a=10, b=20;

    printf("Cagirmadan once %d %d\n",a,b);
    degistir(&a,&b);
    printf("Cagirdiktan sonra: %d %d\n",a,b);


    return 0;
}