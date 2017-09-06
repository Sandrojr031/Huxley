# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main()
{
    char frase[200];
    int tamanho, i, qtd_letras=0, qtd_numeros=0;
    gets (frase);
    tamanho = strlen(frase);
    for(i=0; i<tamanho;i++)
    {
        if( isdigit(frase[i])==0 ){
            qtd_letras++;
        }
        else{
            qtd_numeros++;
        }
        //printf("%c", frase[i]);
    }
    //printf("\nTotal de letras da Frase : %d",qtd_letras);
    printf("%d",qtd_numeros);
    //printf("\n\n");
    //Total de numeros da Frase :
    return 0;
}
