#include <stdio.h>

int main(void)
{
    /*
        Váriaveis seriam uma forma de temporariamente guardar dados na execução de um programa.

        Toda variavel deve ter um "tipo", que especifica que tipo de dados elas vai armazenar. E escolher o tipo correto é algo crítico, visto que ele
        afeta como a variavel é guardada e que tipo de operações podem ser realizadas na variavel.

        Uma variavel do tipo "int" (integer) pode guardar numeros inteiros como 0, 1, 392 ou -2553. O gama de valores possiveis é limitada, tendo tipicamente
            seu maior valor armazenado como 2147483647.

        Uma variavel do tipo float (ponto flutuante "floating point") pode armazenar valores muito maiores do que o tipo int. E além disso, uma variavel float
            consegue armazenar números com digitos depois do ponto decimal, como 379.125.
        Mas tome cuidado pois váriaveis do tipo float também possuem suas desvantagens, aritmética em números float podem acabar sendo mais lentas do que em
            ints. Mais significativamente por conta que o valor de uma variavel float é na maioria das vezes uma aproximação do número que está guardado nela.
            Se armazenassemos 0.1 em uma variavel float, nós podemos descobrir depois que a variavel possui um valor como 0.09999999999987, por conta de um
            erro de arredondamento.

        Variaveis precisam ser declaradas antes de serem usadas. Para declarar uma variavel, primeiro precisamos especificar o tipo da variavel,
            e então seu nome.
    */

    /* 
    int height;
    float profit; 
    */

    /*
        A primeira declaração significa que "height" é uma variavel do tipo int, significando que height pode armazenador valores int.
        A segunda declaração diz que "profit" é uma variavel do tipo float. E caso várias variaveis possuam o mesmo tipo, elas podem ser combinadas:
    */

    int height, length, width, volume;
    float profit, loss;

    // Atribuição
    // Uma variavel pode ser dada uma valor por meio de uma atribuição. Por exemplo as declarações:

    height = 8;
    length = 12;
    width = 10;

    // Atribuem valores para height, length e width. Os números 8, 12 e 10 podem ser chamados de constantes.

    /*
        Uma nota que antes que uma variavel possa ser atribuida um valor, ou usada de qualquer outra forma, ela primeiro precisa ser declarada.

        **** Correto:
    int height;
    height = 8;

        **** Errado:
        Causaria erro por estar tentando atribuir um valor a uma variavel que ainda não foi declarada
    height = 8;
    int height;
    */

    /*
        Uma constante atribuida a uma variavel de tipo float normalmente possui um ponto decimal. Por exemplo, se profit é um float:

    profit = 2150.48;

        É uma boa pratica colocar a letra "f" (para "float") em uma constante que contem um ponto decimal se o número for atribuido a uma variavel float.
    */

    profit = 2150.48f;

    /*
        Não colocar o "f" pode causar um aviso do seu compilador.

        Lembrando também que atribuir um valor do tipo int em uma variavel float, ou viceversa, é possivel, mas não algo segura de se fazer.

        Uma vez que uma variavel for atribuida um valor, ela já pode ser usada para ajudar a computar o valor de outra variavel:
    */

    height = 8;
    length = 12;
    width = 10;

    volume = height * length * width; // Volume agora é 960

    /*
        Em C, * representa o operador de multiplicação, então essa declaração multiplica o valores guardados dentro das variaveis height, length e width,
            e então atribui eles para o resultado da variavel volume.
    */

    // Imprimindo o valor de uma variavel

    /*
        Podemos usar printf para mostrar o valor atual de uma variavel. Por exemplo, para mostrar a mensagem:

    Height: h

        sendo h o valor atual da variavel height, devemos usar o seguinte chamamento da função printf
    */

    printf("Height: %d\n", height);

    /*
        %d é um espaço reservado indicando onde o valor de height deve ser preenchido durante a impressão.
        %d funciona somente para variaveis de tipo int, para imprimir uma variavel float, usamos %f. E por padrão, %f mostra um número com seis digitos
            após o ponto decimal. Para forçar %f a mostrar x digitos depois do ponto decimal, podemos colocar .x entre % e f. Por exemplo para imprimir:
    Profit: $2150.48

        Nós devemos chamar a função printf da seguinte forma:
    */

    printf("Profit: $%.2f\n", profit);

    /*
        Não existe um limite para o número de variaveis que podem ser exibidas atras de uma unico chamamento do printf.
        Para mostrar os valores de height e de length, nós poderiamos usar o seguinte chamamento de printf
    */

    printf("Height: %d Length: %d\n", height, length);
}