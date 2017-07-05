/*
		TOUT OU RIEN (openclassroom)
		19/06/17
										*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int		main()
{
	int	continuer = 1;

	while(continuer == 1)
	{
		int nb = 0;
		int i = 0;
		int level = 1;
		int MAX = 100;
		const int MIN = 1;
		printf("Choisisser le niveau:\n 1 : 1 - 100 \n 2 : 1 - 1000 \n 3 : 1 - 10000\n");
		scanf("%d", &level);
		if(level == 1)
		{
			MAX = 100;
		}
		else if(level == 2)
		{
			MAX = 1000;
		}
		else if(level == 3)
		{
			MAX = 10000;
		}	
	srand(time(NULL));
	nb = (rand() %(MAX - MIN)) + MIN;

		int nb_user = 0;

	
		while(nb != nb_user)
		{
			printf("Quel est le nombre ?\n");
			scanf("%d", &nb_user);
			if(nb_user > nb)
			{
				printf("c'est moin !\n");
			}
			else if(nb_user < nb)
			{
				printf("c'est plus !\n");
			}
			if(nb != nb_user)
			{
				i++;
			}
					printf("\n");
		}
		if(i != 0)
		{
			printf("Bravo tu a trouvé le nombre mystère en %d coups!!!\n", i +1 );

		}
		else
		{
			printf("Bravo tu a trouvé le nombre mystère du premier coup!!!\n\n");
		}
		printf("Une autre partie ?\n 1 : continuer\n 0 : GAME OVER\n");
		scanf("%d", &continuer);
	}

return(0);
}