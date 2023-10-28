//bileşik faiz hesaplayan program


#include <stdio.h>
#define BIRYIL 12

float bilesikfaiz(float x, float y){
    int i=0;
    while (i<BIRYIL){
        x+=(x*y)/100;
        i++;
    }
    return x;
}

int main(){

    float anapara=0.0;
    float faizorani=0.0;
    printf("Lutfen anaparanizi yazin: ");
    scanf("%f",&anapara);
    printf("Lutfen faiz oranini yazin: ");
    scanf("%f",&faizorani);
    float sonpara=bilesikfaiz(anapara,faizorani);
    printf("Her ay ayni faiz oraniyla,\nBir yil sonra anaparaniz: %.1f\n",sonpara);



    return 0;
}