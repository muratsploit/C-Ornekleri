//Kilosu 100, boyu 120 santim olan ve her ay
//boyu %10 kilosu %5 artan birinin
//kaç ay sonra kilosu 150 ve boyu 210'u gecer.


#include <stdio.h>


void hesap();

int main(){

    hesap();

    return 0;
}

void hesap(){
    
    float i=0.0;
    float boy=120.0, kilo=100.0;
    while (boy<=210.0||kilo<=150.0){
        boy+=boy*0.1;
        kilo+=kilo*0.05;
        i++;
    }
    printf("%.1f\n",i);
}