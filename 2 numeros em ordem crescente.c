#include <stdio.h>

int main()
{
    int a,b,maior,menor;
    scanf("%d",&a);
    scanf("%d",&b);

    if (a < b)
    {
        maior = b;
        menor = a;
    }
    else
    {
        maior = a;
        menor = b;
    }


    printf("%d %d",menor,maior);





    return 0;
}

