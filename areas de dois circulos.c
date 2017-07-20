#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float raio, raio2, area1, area2;

    scanf("%f", &raio);

    area1 = 3.14 * raio * raio;

    scanf("%f", &raio2);

    area2 = 3.14 *raio2 * raio2;

    if(area1 > area2)
    {
       printf("Primeiro circulo");
    }
    else if(area2 > area1)
    {
       printf("Segundo circulo");
    }
    else
    {
       printf("Iguais");
    }

    return 0;
}
