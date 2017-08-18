#include <stdio.h>  //biblioteca de entrada e saida

void main() //inicio do programa (void=ausência de retorno)
{
  int n;    //variavel do tipo inteiro (numero)
  scanf("%d", &n);  //lê o número digitado

  int digito1 = (n / 100);  //divide o "n" por 100
  int digito2 = (n % 100) / 10; //divide o "n" por 10
  int digito3 = (n % 100) % 10; //resto. oq sobra ele já entra automaticamente

  printf("%1d%1d%1d", digito3, digito2, digito1);   //imprime os valores

return; //final do programa
}
