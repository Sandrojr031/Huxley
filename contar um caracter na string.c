#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    char letra;
    int i, encontradas=0;

    //printf("digite o seu nome: ");
    //scanf("%s",nome);
    gets(nome);

    int qtd_letras_nome = strlen(nome);

    scanf("%c",&letra);
    //printf("o nome armazenado foi: %c", letra);

    for(i=0; i<qtd_letras_nome; i++)
    {
        //printf("%c\n", nome[i]);
        if(nome[i]==letra)
        {
            encontradas++;
        }

    }
    printf("%d",encontradas);
    return 0;
}
