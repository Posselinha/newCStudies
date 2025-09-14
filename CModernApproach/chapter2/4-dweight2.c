#include <stdio.h>

int main(void)
{
    /*
        Para conseguir entrada de dados, utilizamos a função scanf. O f em scanf, como o f em printf, significa formatado; Tanto o scanf e o
        prinf necessitam do uso de uma string formatada para especificar a aparência da entrada ou saida de dados.
        O scanf precisa saber qual forma a entrada de dados vai tomar, da mesma forma que o printf precisa saber como mostrar a saida de dados.
        A leitura de um valor int pode ser feito desta forma:

    scanf("%d", &i); // Lê um integer e armazena ele em i

        A string "%d" fala para o scanf para ler a entrada de dados que representa um integer; sendo i uma variavel do tipo int que nos queremos
        que o scanf armazene informações.

        Ler um float possui um chamamento um pouco diferente no scanf

    scanf("%f", &x); // Leia um valor float e armazene em x

        %f funciona somente com variaveis do tipo float, então estamos assumindo que x seja uma variavel float. O "%f" fala para o scanf
        procurar na entrada de dados um valor em float. (O número pode conter um ponto decimal, mas não é obrigatorio)
    */

    // Computa o peso dimensional de uma caixa através dos dados fornecidos por um usuario.

    int height, length, width, volume, weight;

    // Note que a mensagem que pergunta ao usuário para inserir um valor não deve ter um caracter de nova linha "\n"
    // Por causa que queremos que o usuario insira o dado na mesma linha que a pergunta em si. Quando o usuário apertar enter
    // o cursor automaticamente move para a proxima linha.

    printf("Enter height of box: ");
    scanf("%d", &height);

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;

    // Este programa sofre com um problema: Ele não funciona corretamente caso o usuario insira um valor não númerico.
}