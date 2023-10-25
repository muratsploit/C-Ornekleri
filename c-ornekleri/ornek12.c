//Kare alan fonksiyon

#include <stdio.h>

int kare_al(int x){
    x=x*x;
    return x;
}

int main(){
  
  int sayi;
  printf("Bir sayi girin: ");
  scanf("%d",&sayi);
  printf("Sayinin karesi: %d\n",kare_al(sayi));
    return 0;
}