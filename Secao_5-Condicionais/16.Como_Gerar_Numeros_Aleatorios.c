#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fun��o principal do programa
void main(){

    // Respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // Vari�vel que recebe o resto da divis�o do n�mero por 3 (aleatorio)
    int aleatorio = rand() % 3;

    // Vari�vel que recebe o resto da divis�o do n�mero por 5 (aleatorio)
    int aleatorioSegundo = (rand() % 5) + 1;

    // Imprime o valor
    printf("%d", aleatorio);
    printf("%d", aleatorioSegundo);

    aleatorioSegundo = (rand() % 5) + 1;

    // Imprime o valor
    printf("%d", aleatorioSegundo);

    // Pausa o programa ap�s executar
    system("pause");
}

