/*
Dizilerde diziye girilen elemanlardan benzer
olanları bulma
*/

#include <stdio.h>


void main(){

int dizi[5];
int i;

for (i=0;i<5;i++){
    printf("Dizinin %d. elemanini girin: ",i+1);
    scanf("%d",&dizi[i]);
}
for (i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(dizi[i]==dizi[j]){
            printf("Dizideki benzer sayilar %d ve %d\n",dizi[i],dizi[j]);
        }
    }
}



}