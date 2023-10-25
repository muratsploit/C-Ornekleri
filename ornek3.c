//Girilen saatlik ücret ve çalışma saatine göre
//maaş hesabı

#include <stdio.h>

int main(){
    int saatlikucret,calismasaati,maas;
    printf("Saatlik ucret: ");
    scanf("%d",&saatlikucret);
    printf("Kac saat calistiniz: ");
    scanf("%d",&calismasaati);

    maas=saatlikucret*calismasaati*31;

    printf("Bu ay yatacak maasiniz: %d\n",maas);





    return 0;
}