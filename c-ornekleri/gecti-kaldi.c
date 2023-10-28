//Girilen 3 nottan en az ikisi 60'ın üzerindeyse
//gecti degilse kaldi yazan kod

#include <stdio.h>

void kontrol(int x, int y, int z);

int main(){

    int note1, note2, note3;
    printf("İlk not: ");
    scanf("%d",&note1);
    printf("İkinci not: ");
    scanf("%d",&note2);
    printf("Ucuncu not: ");
    scanf("%d",&note3);
    kontrol(note1,note2,note3);

    return 0;
}

void kontrol(int x, int y, int z){

    int sonuc=0;

    if (x>60){
        sonuc+=1;
    }
    if (y>60){
        sonuc+=1;
    }
    if (z>60){
        sonuc+=1;
    }

    if(sonuc>=2){
        printf("Gecti\n");

    }
    else{
        printf("Kaldi\n");
    }
}