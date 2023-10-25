//girilen iki sayi arasindaki sayilarin faktoriyelini
//bulan program
#include <stdio.h>
 int main(){   
    
    int sayi1,sayi2,i,j,fakt=1;
    
    printf("İlk sayiyi girin: ");
    scanf("%d",&sayi1);
    printf("İkinci sayiyi girin: ");
    scanf("%d",&sayi2);

    for (i=sayi1+1;i<sayi2;i++){
        for (j=i;j>0;j--){
            fakt=fakt*j;
        }
        printf("%d'nin faktoriyeli: %d\n",i,fakt);
        fakt=1;
    }

    return 0; 
}