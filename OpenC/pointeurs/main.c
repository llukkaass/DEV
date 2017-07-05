/*

			Découpe minutes
			20/06/2017
									*/



#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *heures, int *minutes);

int	main()
{
	int heures = 0, minutes = 1440;
	int	*h = &heures; // *h prend l'adresse de heures
	int	*m = &minutes; // *m prend l'adresse de minutes

	decoupeMinutes(h, m); 
	printf("%d heures et %d minutes\n", heures, minutes); // imprime la valeur de la var heures et minutes
	return(0);
}

void	decoupeMinutes(int *heures, int *minutes)
{
	*heures = *minutes / 60;
	*minutes = *minutes % 60;
}