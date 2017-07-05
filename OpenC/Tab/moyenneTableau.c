/*

		exercice 2 sur les Tab
		20/06/2017

								*/

#include <stdio.h>

float moyennetableau(int tableau[], int tailletableau);

int main(int argc, char *argv[])
{
	int tab[6] = {10,20,30,50,44,65};
	printf("%f\n", moyennetableau(tab, 6) ); 
	return(0);
}

float moyennetableau(int tableau[], int tailletableau)
{
	int somme = 0;
	int i = 0;
	while(i < tailletableau)
	{
		somme = somme + tableau[i];
		i++;
	}
	somme = somme / tailletableau;

	return(somme);
}