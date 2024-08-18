#include <stdio.h>
#import <locale.h>

int main(){
    setlocale(0,"Portuguese");
    printf("Exercício 9\n");

    float n1 ,n2 ,n3 ,total ;

    printf("Nota 1: ",n1);
    fflush(stdin);
    scanf("%f",&n1);
    printf("Nota 2: ",n2);
    fflush(stdin);
    scanf("%f",&n2);
    printf("Nota 3: ",n3);
    fflush(stdin);
    scanf("%f",&n3);


    total = (2 * n1 / 10) + (3 * n2 / 10) + (5 * n3 / 10) ;
    printf("A média final é: %.1f",total );

    return 0;
}
