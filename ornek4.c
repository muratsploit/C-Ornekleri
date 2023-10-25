//Karenin alanini ve cevresini hesaplayan program

#include <stdio.h>

int main(){

    int kenar;
    printf("Karenin bir kenarini girin: ");
    scanf("%d",&kenar);

    printf("Karenin alani: %d\n",kenar*kenar);
    printf("Karenin cevresi: %d\n",4*kenar);



    return 0;
}