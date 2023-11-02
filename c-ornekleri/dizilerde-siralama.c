//dizilerde siralama yapan program
#include <stdio.h>

void sirala();
void diziyi_yaz();

int sayilar[7];
int i;

int main(){
    
    printf("Diziye 7 tane sayi girilecek.\n\n");
    for(i=0;i<7;i++){
        printf("[%d]. sayiyi gir: ",i);
        scanf("%d",&sayilar[i]);
    }
    sirala();
    diziyi_yaz();
    
    return 0;
}

void sirala(){
    int j,gecici;
    for (i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(sayilar[j]<sayilar[i]){
                gecici=sayilar[i];
                sayilar[i]=sayilar[j];
                sayilar[j]=gecici;
            }
        }
    }

}

void diziyi_yaz(){
    for (i=0;i<7;i++){
        printf("%d ",sayilar[i]);

    }
    printf("\n");

}
