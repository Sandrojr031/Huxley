#include <stdio.h>
#include <string.h>




main()
{
	char palavra[255], v[255];
	int i, j, tam;

	//printf("digite uma palavra:");

    //gets(palavra);
   // fgets(palavra, 255, stdin);

    scanf("%s", &palavra);

	tam = strlen(palavra); // string length

	//printf("o tamanho da palavra é: %d", tam);
	for(i=tam, j=0; i>=0; i--, j++)
	{
		v[j]=palavra[i-1];
		printf("v[%d] (%c) = palavra[%d] (%c)\n",j,v[j],i,palavra[i-1]);
	}
	printf("%s", v);


	//'\0'

	return 0;
}
