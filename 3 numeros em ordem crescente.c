#include <stdio.h>  //biblioteca de entrada e sa�da

    // < menor qu�
    // > maior qu�

    //ordenar os numeros em ordem crescente

int main()  //come�o do programa
{   //chave do inicio do programa
    int a;  //variavel do tipo inteira
    int b;  //variavel do tipo inteira
    int c;  //variavel do tipo inteira

    scanf("%d",&a);     //comando para entrada de dados
    scanf("%d",&b);     //comando para entrada de dados
    scanf("%d",&c);     //comando para entrada de dados

        if (a > b && a > c) //(se) condi��o     (1,2,3)---------------------
        {
            if(b > c)   //(se) condi��o
            {
                printf("%d\n%d\n%d\n",c,b,a); //caso se encaixe na condi��o vai imprimir isto...
            }
            else    //outra condi��o
            {
                printf("%d\n%d\n%d\n",b,c,a); //caso se encaixe na condi��o vai imprimir isto...
            }

        }
        else if(b > a && b > c) //(se n�o) segue para esta condi��o...      (1,3,2)
        {
            if(a > c)   //(se) condi��o
            {
                printf("%d\n%d\n%d\n",c,a,b); //caso se encaixe na condi��o vai imprimir isto...
            }
            else    //outra condi��o
            {
                printf("%d\n%d\n%d\n",a,c,b); //caso se encaixe na condi��o vai imprimir isto...
            }
        }
        else if(c > a && c > b)    //(se n�o) segue para esta condi��o...   (2,1,3)
        {
            if(a > b)   //(se) condi��o
            {
                printf("%d\n%d\n%d\n",b,a,c); //caso se encaixe na condi��o vai imprimir isto...
            }
            else    //outra condi��o
            {
                printf("%d\n%d\n%d\n",a,b,c); //caso se encaixe na condi��o vai imprimir isto...
            }
        }
        //---------------------------------fim da primeira parte-------------------------------

        else if(a > b && b==c) //(se n�o) segue para esta condi��o...           (2,1,1) --------------------------
        {
            printf("%d\n%d\n%d\n",a ,c ,b); //caso se encaixe na condi��o vai imprimir isto...  (certo)
        }

        else if(b > a && c==a)  //(se n�o) segue para esta condi��o...          (1,2,1)----------------------------
        {
            printf("%d\n%d\n%d\n",c ,a ,b); //caso se encaixe na condi��o vai imprimir isto...  (certo)
        }

        else if(c > a && b==a)  //(se n�o) segue para esta condi��o...          (1,1,2)----------------------------
        {
            printf("%d\n%d\n%d\n",b ,a ,c); //caso se encaixe na condi��o vai imprimir isto...  (certo)
        }

        //-----------------------------------------fim da segunda parte-------------------------------


        else if(a < b && c==b) //(se n�o) segue para esta condi��o...           (1,2,2) --------------------------
        {
            printf("%d\n%d\n%d\n",a ,c ,b); //caso se encaixe na condi��o vai imprimir isto...  (certo)
        }

        else if(b < c && c==a) //(se n�o) segue para esta condi��o...       (2,1,2) --------------------------
        {
            printf("%d\n%d\n%d\n",b ,a ,c); //caso se encaixe na condi��o vai imprimir isto...  ()
        }
        else if(c < a && a==b) //(se n�o) segue para esta condi��o...       (2,2,1) --------------------------
        {
            printf("%d\n%d\n%d\n",c ,a ,b); //caso se encaixe na condi��o vai imprimir isto...  ()
        }


        //-----------------------------------------fim da terceira parte-------------------------------

        else if(a==b && b==c) //(se n�o) segue para esta condi��o...           (0,0,0) --------------------------
        {
            printf("%d\n%d\n%d\n",a ,b ,c); //caso se encaixe na condi��o vai imprimir isto...  (certo)
        }

    //-----------------------------------------fim da quarta parte-------------------------------

return 0;   //mostra que chegou ao fim do programa...
}   //chave do final do programa...
