/*
Como Usar Acentos

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    // Permite usar acentos
    setlocale(LC_ALL,"");
    printf("Olá");
}
*/


/*
Como Escrever na Tela

-Escrever Oi Galera!
    printf("Oi Galera!");

-Escrever o valor de uma variável a
    printf("%d", a);

-Escrever Um texto misturado com uma variável
    printf("O valor de a = %d",a);

-Escrever um texto e pular linha (\n)
    printf("Oi Galera! \n Aqui estou em outra
           linha");
*/


/*
Tipos de Variáveis mais comuns

-int: números inteiros.
    int a = 5;

-float: números quebrados.
    float b = 5.5;

-char: letras únicas.
    char c = 'p';
*/


/*
Como Escrever na Tela

-Inteiros
    printf("%d", nomeDaVariavel);

-Float
    printf("%f", nomeDaVariavel);

-Char
    printf("%c", nomeDaVariavel);
*/


/*
Como Ler Valores Para Variáveis

-Inteiros
    scanf("%d", &nomeDaVariavel);

-Float
    scanf("%f", &nomeDaVariavel);

-Char
    scanf("%c", &nomeDaVariavel);
-ATENÇÃO PARA LIMPEZA DE BUFFER
    fflush(stdin);
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    // Permite usar acentos
    setlocale(LC_ALL,"");

    // Imprime Olá
    printf("Olá");

    // Lendo valor inteiro
    int a1 = 50;
    int a2 = 6;
    printf("%d", a1 + a2);
    printf("O valor de a é = %d", a1);
    scanf("%d", &a1);
    printf("\n O valor de a mudou para %d", a1);

    // Lendo valor quebrado
    float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);

    // Lendo letra
    char letra = "t";
    printf("O valor de c é = %c \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de c mudou para %c", letra);
}
