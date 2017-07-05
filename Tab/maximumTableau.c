

#include <stdio.h>
#include "tableau.h"

int main(int *argc, char *argv[])
{
	int tab[5] = {11, 22, 33, 44, 55} ;
	float i = moyenneTableau(tab, 5);
	printf("%f  \n",i);
	return(0);
}

/*void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
		int i = 0;
		while(i < tailleTableau)
		{
			if(tableau[i]  > valeurMax)
			{
				tableau[i] = 0;
			}
			printf("%d ",tableau[i]);
			i++;
		}
}*/