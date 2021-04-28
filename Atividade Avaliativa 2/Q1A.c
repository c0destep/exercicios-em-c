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
    float number;

    message();

    printf("\n Digite um valor é receberá seu antecessor: ");
    scanf("%f", &number);

    if (number == (int)number)
    {
        number--;

        printf("\n O antecessor é: %i \n", (int)number);
    }
    else
    {
        printf("O valor digitado não é inteiro");
    }
}