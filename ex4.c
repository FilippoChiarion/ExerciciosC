#include <stdio.h>
#import <locale.h>
main(){
    setlocale(0,"Portuguese");
    printf("Exerc�cio 4\n");
    int brancos, nulos, validos, total;
    float zbrancos, znulos, zvalidos;
    printf("Votos brancos: ",brancos);
    fflush(stdin);
    scanf("%i",&brancos);
    printf("Votos nulos: ",nulos);
    fflush(stdin);
    scanf("%i",&nulos);
    printf("Votos v�lidos: ",validos);
    fflush(stdin);
    scanf("%i",&validos);

    total = brancos + nulos + validos;
    zbrancos = (brancos/ (float)total) * 100;
    znulos = (nulos/ (float)total) * 100;
    zvalidos = (validos / (float)total) * 100;
    printf("As porcentagens dos brancos � de %.2f%%, dos nulos � de %.2f%%,e dos v�lidos � %.2f%%",zbrancos ,znulos ,zvalidos);

    return 0;
}
