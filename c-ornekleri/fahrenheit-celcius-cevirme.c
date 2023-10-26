//Fahrenheit-celcius çeviri

#include <stdio.h>

float ceviri(float x){
    return ((x-32.0)*5.0/9.0);
}


int main(){

    float derece;
    printf("Dereceyi fahrenheit cinsinden girin: ");
    scanf("%f",&derece);

    printf("Celcius cinsinden sicaklik: %.2f\n", ceviri(derece));



return 0;
}
  