#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    printf("Exercício 3\n");

    int anos,meses,dias,total;

    printf("Quantos anos você tem? ",anos);
    fflush(stdin);
    scanf("%i",&anos);

    printf("Quantos meses você tem? ",meses);
    fflush(stdin);
    scanf("%i",&meses);

    printf("Quantos dias você tem? ",dias);
    fflush(stdin);
    scanf("%i",&dias);

    total = (365 * anos) + (meses * 30) + dias;
    printf("Você tem %i dias de vida!",total);

    return 0;
}

