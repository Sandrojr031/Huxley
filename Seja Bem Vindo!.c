#include <stdio.h>

int main ()
{
   char nome[120];

   gets(nome);

   printf("Seja muito bem-vindo %s", nome);

   return(0);
}
