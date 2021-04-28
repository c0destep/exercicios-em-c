#include <stdio.h>

int main()
{
    // DECLARANDO VARIAVEIS
    int g = 0, i = 0, l = 0, k = 0, m, n, o;

    // LAÇO DE REPETIÇÃO
    // ENQUANTO i FOR MENOR QUE 10
    while (i < 10)
    {
        // INCREMENTA AS VARIAVEIS
        m = ++g;
        n = +l;
        o = ++k;
        i++;
    }

    // MOSTRA NA TELA
    printf("m=%i n=%i o=%i \n", m, n, o);

    return 0;
}