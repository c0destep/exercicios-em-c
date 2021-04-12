#include <stdio.h>

// DEFININDO VARIAVEIS
int i, j, k;

int main () {

    // ENQUANTO i FOR MENOR QUE k
    for (i = 0, j = 2, k = 4; i < k; i++)
    {
        // O k SÓ É INCREMENTADO QUANDO HOUVER RESTO DE DIVISÃO
        k=k+i%2;
    }

    // MOSTRA VALOR NA TELA
    printf("%d, %d, %d", i, j, k);

    return 0;
}