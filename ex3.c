#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    printf("Exerc�cio 3\n");

    int anos,meses,dias,total;

    printf("Quantos anos voc� tem? ",anos);
    fflush(stdin);
    scanf("%i",&anos);

    printf("Quantos meses voc� tem? ",meses);
    fflush(stdin);
    scanf("%i",&meses);

    printf("Quantos dias voc� tem? ",dias);
    fflush(stdin);
    scanf("%i",&dias);

    total = (365 * anos) + (meses * 30) + dias;
    printf("Voc� tem %i dias de vida!",total);

    return 0;
}

