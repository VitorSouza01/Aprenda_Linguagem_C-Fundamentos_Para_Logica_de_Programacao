#include <stdio.h>
#include <stdlib.h>

// Fun��o principal do programa
void main(){

    // Definindo Vari�veis
    int a = 5, b = 3;

    // Soma
    printf("\n A soma de a e b = %d", a + b);

    // Soma
    printf("\n A soma de %d e %d = %d", a , b, a + b);

    // Subtra��o
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

    // Divis�o
    printf("\n A divisao de %d e %d = %d", a, b, a / b);

    // Multiplica��o
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);

    // Resto de Divis�o
    printf("\n O resto da divisao entre %d e %d = %d", a, b, a % b);

    // Valor Absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    // Pausa o programa ap�s executar
    system("pause");

}
