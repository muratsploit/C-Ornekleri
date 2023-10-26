//Girilen sayiya kadar asal bulan program

#include <stdio.h>
#include <stdbool.h>

bool asalmi(int n)
{
    if (n == 1 || n == 0)
        return false;
 
    
    for (int i = 2; i <= n / 2; i++) {
 
        if (n % i == 0)
            return false;
    }
    return true;
}
 
int main()
{
    int sayi;
    printf("Hangi sayiya kadar gitsin: ");
    scanf("%d",&sayi);
 
    for (int i = 1; i <= sayi; i++) {
 
        if (asalmi(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}