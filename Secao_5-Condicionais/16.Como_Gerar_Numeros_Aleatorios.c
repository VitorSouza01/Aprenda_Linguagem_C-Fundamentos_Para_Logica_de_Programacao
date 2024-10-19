#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função principal do programa
void main(){

    // Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // Variável que recebe o resto da divisão do número por 3 (aleatorio)
    int aleatorio = rand() % 3;

    // Variável que recebe o resto da divisão do número por 5 (aleatorio)
    int aleatorioSegundo = (rand() % 5) + 1;

    // Imprime o valor
    printf("%d", aleatorio);
    printf("%d", aleatorioSegundo);

    aleatorioSegundo = (rand() % 5) + 1;

    // Imprime o valor
    printf("%d", aleatorioSegundo);

    // Pausa o programa após executar
    system("pause");
}

