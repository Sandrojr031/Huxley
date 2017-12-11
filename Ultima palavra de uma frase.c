#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char fra[400];
    int c1,t,t2;
    t=0;
    t2=0;
    gets(fra);

    for (c1=0; c1<strlen(fra); c1++)
    {
        if (strchr (" ", fra[c1]) != 0)
        {
            t=c1;
        }
    }

    for (c1=0; c1<strlen(fra); c1++)
    {
        if (strrchr(" ",fra[c1])!=0)
        {
            t2=c1;
        }
    }

    for (c1=t2; c1<strlen(fra); c1++)
    {
        printf("%c",fra[c1]);
    }

    printf("  \n");
    return 0;
}
