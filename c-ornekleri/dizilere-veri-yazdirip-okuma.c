//Dizilere değer atama veya okuma örneği

#include <stdio.h>

int main(){

    int deger, dizi[10];
    int secim,indeks;

    do{
        printf("Bir secim yapin(Cikmak icin -1): \n");
        printf("\t1 - Diziye yazmak icin\n");
        printf("\t2 - Diziden okumak icin\n");
        scanf("%d",&secim);
        if (secim==-1){
        break;
        }
        if(secim!=1 && secim!=2){
            printf("Hatali secim!\n");
            continue;
        }
        printf("Dizi indeksini girin: ");
        scanf("%d",&indeks);
        if(indeks<0 || indeks>9){
            printf("Lutfen 0-9 arasi bir indeks girin!\n");
            continue;
        }
        switch(secim){
            case 1: 
                printf("%d nolu indekse hangi sayi yazilsin: ",indeks);
                scanf("%d",&deger);
                dizi[indeks]=deger;
                printf("Islem Basarili!\n\n");
                break;
            case 2:
                //printf("Dizideki kacinci indeksi okumak istiyorsunuz?: ");
                //scanf("%d",&indeks);
                printf("Dizinin %d. indeksindeki deger: %d\n\n",indeks,dizi[indeks]);
                break;
            
        }

    }while(secim!=-1);


    return 0;
}