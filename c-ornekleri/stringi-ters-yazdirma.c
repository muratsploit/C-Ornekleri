//Girilen stringi ters yazdirma
#include <stdio.h>
#include <string.h>

void main (){


char kelime[30];

printf("30 karakterden kucuk bir yazi yazin: ");
scanf("%s",kelime);

int uzunluk=strlen(kelime);

if (uzunluk>30){
    printf("30 karakterden fazla girdiniz.\n");
}
else{
    for (int i=uzunluk-1;i>=0;i--){
        printf("%c",kelime[i]);
    }
}
printf("\n");








}