//Verilen kelimede sayi var mı bulan program

#include <stdio.h>
#include <string.h>

void main(){

    char kelime[30];
    printf("30 karakterden az bir kelime girin: ");
    scanf("%s",kelime);
    
    int uzunluk=strlen(kelime);
    if (uzunluk>30){
        puts("30 karakterden fazla girdiniz");
    }
    else {
        for (int i=uzunluk-1;i>=0;i--){
            if (kelime[i]=='0' || kelime[i]=='9' || kelime[i]=='8' || kelime[i]=='7'|| kelime[i]=='6' || kelime[i]=='5' || kelime[i]=='4'|| kelime[i]=='3'|| kelime[i]=='2'|| kelime[i]=='1'){
                printf("Dizide sayi var.\n");
                break;    
            }
            else{
                if(i==0){
                    printf("Dizide sayi yok.\n");

                }
            }
            
        }
        
    }
    
    

}