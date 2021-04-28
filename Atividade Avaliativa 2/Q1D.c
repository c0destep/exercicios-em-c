#include <stdio.h>
#include <locale.h>

void message(void)
{
    printf("*******************************");
    printf("********* PHYTOLINE ***********");
    printf("*******************************");

    return;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float eleitores, votonulo, votobranco, votovalido, percentNulo, percentBranco, percentValido;

    message();

    printf("\n Digite o número de eleitores: ");
    scanf("%f", &eleitores);
    printf("\n Digite o número de votos nulos: ");
    scanf("%f", &votonulo);
    printf("\n Digite o número de votos brancos: ");
    scanf("%f", &votobranco);
    printf("\n Digite o número de votos válidos: ");
    scanf("%f", &votovalido);

    percentNulo = (votonulo / eleitores) * 100;
    percentBranco = (votobranco / eleitores) * 100;
    percentValido = (votovalido / eleitores) * 100;

    printf("%.2f Porcento de NULO, %.2f Porcento de BRANCO é %.2f Porcento de VÁLIDOS \n", percentNulo, percentBranco, percentValido);

    return 0;
}