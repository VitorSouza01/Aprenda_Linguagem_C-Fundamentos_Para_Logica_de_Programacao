#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
void main(){

    // Definindo Variáveis
    int a = 4;
    float b = 2.5;
    char c = 'x';

    // Condicional Simples
    if (a == 5){
        printf("\n A variavel a = 5");
    }
    if (b == 2.5){
        printf("\n A variavel b = 2.5");
    }
    if (c == 'x'){
        printf("\n A variavel c = letra x");
    }

    // Número par ou impar
    if (a % 2 == 1){
        printf("\n A variavel a eh impar");
    }else{
        printf("\n A variavel a eh par");
    }

    // Pausa o programa após executar
    system("pause");
}
