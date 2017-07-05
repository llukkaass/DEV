	#include <stdio.h>

void ordonnerTableau(int tableau[], int tailleTableau)
{
	int i;
	int a;
	int b;
	i = 1;
	a = 0;
	b = 0; 
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

int	main(int argc, char const *argv[])
{
	int	i = 0;
	int zoro = 0;
	int	tab[9] = {19555, 8551, 354, 44, 44, 224234, 242323453, 23, 3344};
	ordonnerTableau(tab,8);
 	while(i <= 8)
 	{
		printf("tab[%d] = %d \n", i, tab[i] );
		i++;
	}
	return 0;
}