//faktoriyel bulan program

#include <stdio.h>

int main(){
int sayi,i,fakt=1;

printf("Faktöriyelini almak istediginiz sayi: ");
scanf("%d",&sayi);

for (i=sayi;i>0;i--){
    fakt=fakt*i;
}
    printf("Sonuc: %d\n",fakt);

    return 0; 
}