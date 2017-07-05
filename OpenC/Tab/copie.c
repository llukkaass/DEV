#include <stdio.h>

void copie(int tableauOrigial[], int tableauCopie[], int tailleTableau);

int main(int argc, char *argv[])
{
	int	tab[3] = {1,2,3};
	int copietab[3] = {0};

	 copie(tab, copietab, 3 );
	return (0);
}

void copie(int tableauOrigial[], int tableauCopie[], int tailleTableau)
{
	int i = 0;
	while(i < tailleTableau)
	{
		tableauCopie[i] = tableauOrigial[i];
					printf("%d\n", tableauCopie[i]);

		i++;
	}

}