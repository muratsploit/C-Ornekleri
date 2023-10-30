/*
Klavyeden girlen üç adet kenar uzunluğu ile a-bir 
üçgenin çizilip çizilemeyeceğini, 
b-eğer üçgen çizilirse üçgenin çeşidini(ikizkenar, 
çeşitkenar, eşkenar), c-çizilen üçgenin çeevresini
bulup ekrana yazdıran kod
*/

#include <stdio.h>

void ucgenfonk(int x, int y, int z);

int main(){

    int kenar1,kenar2,kenar3;
    printf("Birinci kenari girin: ");
    scanf("%d",&kenar1);
    printf("Ikinci kenari girin: ");
    scanf("%d",&kenar2);
    printf("Ucuncu kenari girin: ");
    scanf("%d",&kenar3);
    ucgenfonk(kenar1,kenar2,kenar3);



    return 0;
}

void ucgenfonk(int x, int y, int z){
    if(x>0 && y>0 && z>0){
        printf("Ucgen cizilebilir...\n");
        if (x==y&&y==z){
            printf("Eskenar ucgen.\n");
            printf("Ucgenin cevresi: %d\n",x+y+z);
        }
        else if (x==y || y==z || z==x){
            printf("Ikizkenar ucgen.\n");
            printf("Ucgenin cevresi: %d\n",x+y+z);
        }
        else{
            printf("Cesitkenar ucgen.\n");
            printf("Ucgenin cevresi: %d\n",x+y+z);
        }

    }
    else{
        printf("Ucgen cizilemez!\n");
    }

}