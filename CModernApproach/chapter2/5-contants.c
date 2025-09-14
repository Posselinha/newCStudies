#include <stdio.h>
/*
    Quando um programa contém constantes, é uma boa pratica dar a ela nomes. O programa dweight.c e dweight2.c dependem da constante 166,
    no qual o significado acaba não sendo muito transparente para a pessoa que estará lendo o programa depois.
    Utilizando uma ferramenta conhecida como "macro definition". nós podemos nomear esta constante:
*/
#define INCHES_PER_POUND 166

/*
    #define é um diretivo pre-processado, da mesma forma que #include é, por isso, não é ponto e virgula no final de sua declaração.
    Quando um programa é compilado, o pre-processador substitui cada macro pelo valor que ele representa, por exemplo:

weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    irá se tornar

weight = (volume + 166 - 1) / 166;

    Nota que uma definição de macro também pode ser uma expressão:

#define RECIPROCAL_OF_PI (1.0f / 3.14159f)

    Se a definição conterá operadores, a expressão deverá ser colocada entre parenteses.
    Note também como só foi utilizado letras maisculas na nomenclatura dos macros. Isso é uma convenção que a maioria dos programadores C seguem.
*/

int main(void)
{
    int height, width, length, volume, weight;
    
    printf("Enter height of box: ");
    scanf("%d", &height);

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}