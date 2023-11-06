//Pointerla sayilari kiyaslayip büyüğünü bulan program
#include <stdio.h>

void main(void){

int sayi1, sayi2;
int* ptr1; int* ptr2;

printf("İlk sayiyi girin: ");
scanf("%d",&sayi1);
printf("İkinci sayiyi girin: ");
scanf("%d",&sayi2);

ptr1= &sayi1;
ptr2= &sayi2;

if(*ptr1>*ptr2){
    printf("İlk sayi buyuktur\n");


}
else{
    printf("Ikinci sayi buyuktur\n");
}






}