//Klavyeden girilen 2 sayı arasındaki sayılardan
//7'nin katı olanların bulunması

#include <stdio.h>

int main(){

    int i,sayi1,sayi2;
    printf("İlk sayiyi girin: ");
    scanf("%d",&sayi1);
    printf("İkinci sayiyi girin: ");
    scanf("%d",&sayi2);

    for (i=sayi1;i<=sayi2;i++){
        if (i%7==0){
            printf("%d 7'nin katidir!\n",i);
        }
    }
    
    
    return 0;
}