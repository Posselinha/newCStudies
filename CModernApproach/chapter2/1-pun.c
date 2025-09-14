#include <stdio.h>
/* Inclui informações da "C's standard I/O (input/output) library" */

/* main representa o programa principal */
int main(void)
{
    /* printf é uma função do stdio (standard input/output) */
    printf("To C, or not to C: that is the question.\n");
    /* \n serve para o código avançar para a proxima linha */

    /* Indica que o programa retorna 0 após ser executado */
    return 0;
}

/* 

Processo de Compilação de linkagem

Para executar esse código, precisamos primeiro converter ele para uma forma na qual o computador consiga entender
Para um programa C, normalmente isso ocorre em 3 passos:

Pre-processamento: O programa é dado para um preprocessador, que obcede os comandos que começam com # (conhecidos como diretivos)
O preprocessador funciona como um editor, ele pode adicionar coisas no programa e fazer modificações.
Compilamento: O programa modificado agora vai para um compilador, que traduz ele para instruções de máquina (código objeto).
Linkagem: Um linkador combina o codigo objeto produzido pelo compilador com códigos adicionais necessarias para completar um programa executavel.
 Esses códigos adicionais incluem funções da library (como printf) que são usadas no programa.

Antes de um programa C ser compilado, ele primeiro é editado pelo pre-processador. Comandos intencionados para o pre-processador são chamados de diretivos.

#include <stdio.h>
Esse diretivo fala que a informação de <stdio.h> deve ser incluida no programa antes dele ser compilado.
<stdio.h> Contém as informações sobre a biblioteca padrão de input e output do C "C's standard I/O Library".

Funções:
Funções são como os procedimentos em outras linguagens de programação, elas funcionam como blocos de construção na qual os programas são construidos.
Funções podem cair em duas categorias: Aquelas construidas pelo programador e aquelas que são dadas como parte de uma implementação C.

Em C, uma função é uma simplês serie de declarações que foram agrupadas e dadas um nome.
Funções que computam um valor usam a declaração "return" para especificar qual valor ela "retorna".
Mesmo que um programa C possa ser constituido de várias funções, somente a função "main" é obrigatoria.

Note que o nome "main" é algo critico, não podendo ser "begin", "start" ou até mesmo "MAIN".
E por ser uma função, ela também retorna um valor, sendo este um código de status que é dado para o sistema operacional quando o codigo é terminado.

Nó codigo acima, a palavra "int" antes da função main indica que a função retorna um valor inteiro (integer). Enquanto a palavra "void" em parenteses
 Indica que main não possui nenhum argumento.

A declaração "return 0;" tem dois efeitos:
Ele causa a função main parar a execução do programa, como também indica que a função main retorna um valor de 0.

Note que se não tiver a declaração "return" no fim da sua função main, o programa ainda vai parar a execução. No entanto, vários compiladores podem
produzir uma mensagem de aviso por conta que a função precisava retornar um valor inteiro mas falhou em fazer isso.

Note também que a função printf não pula uma linha automaticamente, para isso, é necessario adicionar o caracterer de nova linha "\n"
*/