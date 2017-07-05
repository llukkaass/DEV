/*

		Exercice 1 sur les Tab
		20/06/2017

										*/
#include <stdlib.h>
#include <stdio.h>

int sommeTableau(int tableau[], int tailleTableau);

int main(int argc, char *argv[])
{
	int tab[6] = {10,20,30,50,44,65};
	printf("%d\n", sommeTableau(tab, 6) ); 
	return(0);
}

int sommeTableau(int tableau[], int tailleTableau)
{
	int somme = 0;
	int i = 0;
	while(i < tailleTableau)
	{
		somme = somme + tableau[i];
		i++;
	}

	return(somme);
}