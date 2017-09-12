#include <stdio.h>

void main()
{
  int n;
  scanf("%d", &n);

  int digito1 = (n / 1000);
  int digito2 = (n % 1000) /100;
  int digito3 = (n % 100) /10;
  int digito4 = (n % 10);

  //printf("1 = %d\n", digito1);
  //printf("2 = %d\n", digito2);
  //printf("3 = %d\n", digito3);
  //printf("4 = %d\n", digito4);

  int valor_invertido = digito4*1000 + digito3*100 + digito2*10 + digito1*1;

  printf("%d", valor_invertido);

return;
}
