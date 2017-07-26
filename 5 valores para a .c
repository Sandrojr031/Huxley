#include <stdio.h>

int main()
{
    float a;
    int i;
    int quantidade_negativos=0;
    for(i=0;i < 5;i++)
    {
        printf("Digite um valor:\n");
        scanf("%f", &a);
        if(a < 0)
        {
            quantidade_negativos+=1;
        }
    }
    printf("Foram digitados %d numeros negativos\n", quantidade_negativos);
    return 0;
}
