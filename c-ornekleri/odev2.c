//Kelvin Fahrenheit ve Celcius Dönüşümleri Yapan Program
#include <stdio.h>

void hesapla(float x, char y){
    float cdenfye=(x*1.8)+32;
    float cdenkya=x+273;
    float fdencye=(x-32)/1.8;
    float fdenkya=((x-32)/1.8)+273;
    float kdancye=x-273;
    float kdanfye=((x-273)*1.8)+32;
    
    if (y=='c' || y=='C'){
        printf("Verilen Celcius derecenin Fahrenheit karsiligi: %.2f\n",cdenfye);
        printf("Verilen Celcius derecenin Kelvin karsiligi: %.2f\n",cdenkya);

    }
    else if (y=='f' || y=='F'){
        printf("Verilen Fahrenheit derecenin Celcius karsiligi: %.2f\n",fdencye);
        printf("Verilen Fahrenheit derecenin Kelvin karsiligi: %.2f\n",fdenkya);
    }
    else{
        printf("Verilen Kelvin derecenin Fahrenheit karsiligi: %.2f\n",kdanfye);
        printf("Verilen Kelvin derecenin Celcius karsiligi: %.2f\n",kdancye);
    }

}

void main(){

int i=0;
int baslangicsecim;
float sicaklik=0.0;
char birim;


while (i<1){
    printf("\n\nIslem yapmak istiyor musunuz?\n(Devam etmek icin 0'a kapatmak icin 1'e basin): ");
    scanf("%d",&baslangicsecim);
    if(baslangicsecim!=0){
        i=1;
        break;
    }
    else {
        
        do{
            printf("Sicakligi girin: ");
            scanf("%f",&sicaklik);
            printf("Sicaklik birimini girin: ");
            scanf(" %c",&birim);
            if (birim == 'c' || birim == 'C' || birim == 'f' || birim == 'F' || birim == 'k' || birim == 'K' ){
                hesapla(sicaklik,birim);
                break;
            }
            else{
                printf("Yanlis birim girdiniz!\n");
                
            }
            }
            while (birim != 'c' || birim != 'C' || birim != 'f' || birim != 'F' || birim != 'k' || birim != 'K');
        }
        
}
}
