#include <stdio.h>

int main()
{
	 	int iValor, iNota50, iNota20, iNota10, iNota5, iNota1, iCont;
	 	iValor = iCont = 0;

		(scanf("%d",&iValor), iValor>0);
        {
		iNota50 = iNota20 = iNota10 = iNota5 = iNota1 = 0;
			if (iValor >= 50)
                       {
					   iNota50 = iValor / 50;
					   iValor = iValor - 50*iNota50;
					   }
			if (iValor >= 20)
                       {
                       iNota20 =iValor / 20;
                       iValor = iValor - 20*iNota20;
                       }
			if (iValor >= 10)
                       {
					   iNota10 = iValor / 10;
					   iValor = iValor - 10*iNota10;
					   }
			if (iValor >= 5 )
                       {
					   iNota5 = iValor / 5;
					   iValor = iValor - 5*iNota5;
					   }
			if (iValor >= 1 )
                       {
					   iNota1 = iValor / 1;
					   iValor = iValor - iNota1;
					   }
			printf("\nNotas de 50: %d", iNota50);
			printf("\nNotas de 20: %d", iNota20);
			printf("\nNotas de 10: %d", iNota10);
			printf("\nNotas de 5: %d", iNota5);
			printf("\nNotas de 1: %d", iNota1);
		}
		return 0;
}

