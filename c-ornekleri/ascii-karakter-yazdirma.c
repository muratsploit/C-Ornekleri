//ASCII alfabesini yazdıran program

#include <stdio.h>

int main(){

    int i;
    
    for (i=65;i<91;i++){
        printf("%d numarasinin karsiligi: %c\n",i,i);
    }


    return 0;
}