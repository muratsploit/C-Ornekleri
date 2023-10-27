//Uslu sayi bulan program
#include <stdio.h>

int usalma(int x, int y);

int main(){
    
    int sayi,us;
    printf("Sayiyi girin: ");
    scanf("%d",&sayi);
    printf("Kac ussu alinacak: ");
    scanf("%d",&us);
    printf("Sonuc: %d\n",usalma(sayi,us));
    return 0;
}

int usalma(int x, int y){
    int i,sonuc=1;
    for (i=1;i<=y;i++){
        sonuc*=x;
    }
    return sonuc;
}