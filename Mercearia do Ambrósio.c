#include <stdio.h>

int main ()
{

    double valor[4]={5.30, 6.00, 3.20, 2.50};
    int cod , quant;
    double total;

    //printf("insira o codigo do produto: ");
    scanf("%d", &cod);
    //printf("insira a quantidade a ser comprada: ");
    scanf("%d", &quant);

    total=quant*valor[cod-1];
    if(quant>=15||total>=40.0)
        total*=0.85;

    printf("R$ %.2f\n", total);

   return(0);
}
