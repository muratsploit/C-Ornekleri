//dijital saat uygulaması

#include <stdio.h>
#include <time.h> //sleep fonksiyonu için
#include <unistd.h>
#include <stdlib.h>

int main(){
    int saat=0,dakika=0,saniye=0;

    while(1){
        system("clear"); //ekrani temizlemek için

        printf("%02d : %02d : %02d",saat,dakika,saniye);

        fflush(stdout); //derliyici buffer'ını silmek için

        saniye++;

        if (saniye==60){
            dakika++;
            saniye = 0;
        }
        if (dakika==60){
            saat++;
            dakika=0;
        }
        if (saat==24){
            saat=0;
            dakika=0;
            saniye = 0;
        }
        sleep(1);        
    }   


}