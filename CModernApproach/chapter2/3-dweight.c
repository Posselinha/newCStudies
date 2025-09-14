#include <stdio.h>

int main(void)
{
    // Computa o peso dimensional de uma caixa 12" x 10" x 8"
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;

    // No C, ao tentar fazer uma divisão de int, a resposta dessa divisão é truncada (remove os numeros da casa decimal), ou seja, 
    // se você fizesse a divisão de "volume / 166", a resposta seria 5 em vez de 5.783.
    // E isso seria como se você estivesse arredondando o valor para baixo, mesmo que o certo seria ele ser arredondado para cima.
    // Uma solução para isso seria adicionar 165 ao valor do volume antes de dividi-lo
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    
    return 0;

    /*
        Uma coisa importante a se lembrar é que algumas variaveis são automaticamente definidas como 0 quando um programa começa a executar,
        mas a maioria não! Uma variavel que não possui um valor padrão e não foi atribuida um valor por um programa é considerado como
        não inicializada. E, caso você tenta acessar uma variavel que não está inicializada, isso pode te gerar um valor inesperado como
        2568, -30891 ou algum outro número estranho. Em alguns compiladores, seu programa pode até mesmo crashar.

        Nós podemos dar a uma variavel um valor inicial através de uma atribuição. Mas ainda assim, existe uma forma mais facil: colocar o valor da variavel
        em sua declaração. Por exemplo, nós podemos declarar a variavel height e inicializa-la de uma vez só!

    int height = 8;

        Em C, o valor 8 é considerado como um inicializador, qualquer número de váriaveis pode ser inicializada na mesma declaração

    int height = 8, length = 12, width = 10;

        Note que cada variavel precisa ter sua propria inicialização. No exemplo seguinte, o inicializador 10 serve somente para width, não para height
        ou length, que continuam não inicializadas.

    int height, length, width = 10;
    */

    /*
        Imprimindo Expressões:

        printf não é limitado somente a mostrar números dentro de variaveis; Ele pode mostrar o valor de qualquer expressão númerica.
        Tomar vantagem desta propriedade pode simplificar um programa e reduzir seu número de variaveis. Por exemplo, a declaração

    volume = height * length * width;
    printf("%d\n", volume);

        Poderia ser substituida por:

    printf("%d\n", height * length * width);

        Essa habilidade do printf de imprimir expressões ilustra um dos principais principios do C:
        "Quando um valor é necessario, qualquer expressão do mesmo tipo pode servir".
    */
}