#include <stdio.h>
#include <string.h>

int main()
{
    int qntv;
    int i;
    scanf("%d",&qntv);
    int valor [qntv];

    for(i=0 ; i < qntv ; i++)
    {
        scanf("%d", &valor[i]);
    }

    for(i=qntv-1 ; i >= 0 ; i--)
    {
        printf("%d ", valor[i]);
    }

return 0;
}
