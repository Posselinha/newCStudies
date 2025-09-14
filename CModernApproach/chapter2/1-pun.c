#include <stdio.h>
// Inclui informações da "C's standard I/O (input/output) library"

// main representa o programa principal
int main(void)
{
    // printf é uma função do stdio (standard input/output)
    printf("To C, or not to C: that is the question.\n");
    // \n serve para o código avançar para a proxima linha

    // Indica que o programa retorna 0 após ser executado
    return 0;
}

// Processo de Compilação de linkagem

// Para executar esse código, precisamos primeiro converter ele para uma forma na qual o computador consiga entender
// Para um programa C, normalmente isso ocorre em 3 passos:

// Pre-processamento: O programa é dado para um preprocessador, que obcede os comandos que começam com # (conhecidos como diretivos)
//  O preprocessador funciona como um editor, ele pode adicionar coisas no programa e fazer modificações.
// Compilamento: O programa modificado agora vai para um compilador, que traduz ele para instruções de máquina (código objeto).
// Linkagem: Um linkador combina o codigo objeto produzido pelo compilador com códigos adicionais necessarias para completar um programa executavel.
//  Esses códigos adicionais incluem funções da library (como printf) que são usadas no programa.