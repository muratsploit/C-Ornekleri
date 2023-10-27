//Carpim tablosu örneği

#include <stdio.h>

void carpimtablosu(int x, int y);

int main(){

    int ilksayi,ikincisayi;
    printf("İlk sayiyi girin: ");
    scanf("%d",&ilksayi);
    printf("Kaca kadar carpsin: ");
    scanf("%d",&ikincisayi);
    carpimtablosu(ilksayi,ikincisayi);

    return 0;
}

void carpimtablosu(int x,int y){
    int i;
    for(i=1;i<=y;i++){
        printf("%d * %d = %d",x,i,x*i);
        printf("\n");
    }
}