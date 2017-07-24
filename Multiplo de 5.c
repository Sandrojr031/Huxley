#include <stdio.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    int resto = numero%5;

    if(resto == 0)
    {
        printf("Eh multiplo de 5");
    }
    else
    {
        printf("Nao eh multiplo de 5");
    }
    return 0;
}
