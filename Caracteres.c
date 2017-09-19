#include <stdio.h>
#include <string.h>

main()
{
	char palavra1[100000], v[100000];
	//char palavra2[100000], v[100000];
	int i, j, tam;

	do{
        scanf("%d",&tam);

        if(tam!=0){

            scanf("%s", &palavra1);
            //tam = strlen(palavra1);
            for(i=tam, j=0; i>=0; i--, j++)
            {
                v[j]=palavra1[i-1];
                //printf("v[%d] (%c) = palavra[%d] (%c)\n",j,v[j],i,palavra[i-1]); (pra entender como funciona...)
            }
            printf("%s\n", v);

        }

    }while(tam!=0);
	return 0;
}
