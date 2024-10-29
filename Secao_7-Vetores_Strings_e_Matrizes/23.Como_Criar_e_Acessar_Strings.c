#include <stdio.h>
#include <stdlib.h>

// Uma string é uma sequência de caracteres alfanuméricos, como letras, números e símbolos, utilizada na programação.

// Função principal do programa
void main(){

    // Variáveis
    char palavra[255];

    // Instrução
    printf("Define uma palavra");

    //Limpa o Buffer
    setbuf(stdin, 0);

    // Lê a String
    fgets(palavra, 255, stdin);

    // Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    // Imprime na tela
    printf("%s", palavra);

    // Pausa o programa após executar
    system("pause");
}
