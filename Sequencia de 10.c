#include <stdio.h>
#include <stdlib.h>

int main(){

    int v[10];
	int i,a=0;

	for (i=0;i<10;i++)
	{
		scanf ("%d",&v[i]);
	}
	for (i=0;i<10;i++)
	{
		if (v[9]==v[i])
			a++;
	}
	printf ("O numero %d apareceu %d vezes",v[9],a);

   return 0;
}
