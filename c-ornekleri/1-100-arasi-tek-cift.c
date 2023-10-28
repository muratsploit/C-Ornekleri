//1 ile 100 arasındaki tek ve cift sayilari
//bulan program


#include <stdio.h>

int main(){

    int i;

    for (i=1;i<=100;i++){
        if(i%2==0){
            printf("%d cifttir.\n",i);
        }
        else{
            printf("%d tektir.\n",i);
        }
    }


    return 0;
}