/* 


				FONCTION SUR TABLEAUX
				29.06.2017


*/

#include <stdio.h>

void copie(int tableauOrigial[], int tableauCopie[], int tailleTableau)
{
	int i = 0;
	while(i < tailleTableau)
	{
		tableauCopie[i] = tableauOrigial[i];
		i++;
	}

}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
		int i = 0;
		while(i < tailleTableau)
		{
			if(tableau[i]  > valeurMax)
			{
				tableau[i] = 0;
			}
			i++;
		}
}

float moyenneTableau(int tableau[], int tailletableau)
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

void ordonnerTableau(int tableau[], int tailleTableau)
{
	int i = 1;
	int a = 0;
	int b = 0;
	while(i <= tailleTableau)
	{
		if(tableau[i] < tableau[i - 1])
		{
			b = tableau[i];
			a = tableau[i - 1];
			tableau[i] = a;
			tableau[i - 1] = b;
			i = 0;
		}
		i++;
	}	
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