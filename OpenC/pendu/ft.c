#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>

char	mot_secret_2[50];
char	mot_secret[50];
char	copy[50];
int		points = 0;
int		comp = 1;
int		joueur = 1;


/*void	ft_assign(char *mot)
{
	int i = 0;
	scanf()
	while(mot[i])
	{
		mot_secret_2[i] = mot[i];
		i++;	
	}
}*/

void	ft_lecturebibli(void)
{
	FILE *bibli = NULL;
	int nb_mots = 0;
	char retour = 0;
	int	ligne_mot = 0;
	int i = 0;
	int compteur_lettre = 0;

	bibli = fopen("bibli.txt", "r+");
	if(bibli != NULL)
	{
			//boucle qui conte le nb de ligne
		while(retour != EOF)
		{
			if(retour == '\n')
			{
				nb_mots++;
			}
			retour = fgetc(bibli);
		}
		rewind(bibli);
			//selection aleatoire d'une ligne
		srand(time(NULL));
		ligne_mot = (rand()%(nb_mots - 1)) + 1;//assigne a ligne_mot le nb aleatoire
			//boucle qui permet de trouver la ligne corespondante a nb aleatoire
		while(i < ligne_mot)
		{
			retour = fgetc(bibli);
			compteur_lettre ++;
			if(retour == '\n')
			{
				i++;
				if(i != ligne_mot)
				compteur_lettre = 0;
			}
		}
			retour = 0;
			//positionne l'index au debut du mot
			fseek(bibli,-compteur_lettre,SEEK_CUR);
			//boucle qui lis le mot et l'imprime dans mot_secret		
		for(i = 0; retour != '\n';i++)
		{
			retour = fgetc(bibli);
			if(retour != '\n')
			mot_secret[i] = retour;
		}
	}
	fclose(bibli);
}

void	ft_compare(char *source,char *comparatif)
{
	comp = 0;
	int i = 0;
	while(source[i] != '\0')
	{
		
		if(comparatif[i] != source[i])
		{
			comp ++;
		}
		i++;
	}
}

char	lire(void)
{
	char entree = getchar();
	entree = toupper(entree);

	while(getchar() != '\n');
	return(entree);
}

void	etoile(char *str)
{
	int	i = 0;

	while(str[i])
	{
		copy[i] = '*';
		i++;
	}
}

void	ft_chr(char *chaine,char cara)
{
	int i = 0;
	points = 0;
	while(chaine[i])
	{
		if(chaine[i] == cara)
		{
			copy[i] = cara;
			points = 1;
		}
		i++;
	}
	copy[i] = '\0';
}
void	ft_print_pendu(int pv)
{
	if(pv == 0)
	{
		printf("   ______\n   |    |\n   |    0\n   |   /$\\\n   |   / \\\n   |   \n___|________\n|          |\n\n*******************\n*                 *\n*    YOU LOSE     *\n*                 *\n*******************\n");
	}
	else if(pv == 1)
	{
		printf("   ______\n   |    |\n   |    0\n   |   /$\\\n   |   /  \n   |   \n___|________\n|          |\n\n");
	}
	else if(pv == 2)
	{
		printf("   ______\n   |    |\n   |    0\n   |   /$\\\n   |   \n   |   \n___|________\n|          |\n\n");

	}
	else if(pv == 3)
	{
		printf("   ______\n   |    |\n   |    0\n   |   /$ \n   |   \n   |   \n___|________\n|          |\n\n");

	}
	else if(pv == 4)
	{
		printf("   ______\n   |    |\n   |    0\n   |    $ \n   |   \n   |   \n___|________\n|          |\n\n");

	}
	else if(pv == 5)
	{
		printf("   ______\n   |    |\n   |    0\n   |   \n   |   \n   |   \n___|________\n|          |\n\n");

	}
	else if(pv == 6)
	{
		printf("   ______\n   |    \n   |    \n   |   \n   |   \n   |   \n___|________\n|          |\n\n");

	}
	else if(pv == 7)
	{
		printf("   \n   |    \n   |    \n   |   \n   |   \n   |   \n___|________\n|          |\n\n");

	}
	else if(pv == 8)
	{
		printf("   \n      \n      \n      \n____________\n|          |\n\n");

	}
	else if(pv == 9)
	{
		printf("   \n\n \n|          |\n\n");

	}

}

void	ft_pendu(int pv)
{
	int rejouer = 0;
	char c = 0;
	comp = 1;
	FILE *bibli2 = NULL;


	printf("\n\n\n**************Bienvenu dans le jeu du pendu*************\n\n");
	printf("Mode Un   Joueur (1)\n\n");
	/*printf("Mode Deux Joueur (2)\n\n");
	scanf("%d",&joueur);
	if(joueur == 2)
	{
		printf("Joueur Un Choisissez un mot pour le deuxieme joueur\n");
		scanf("%s",mot_secret_2);	
		bibli2 = fopen("bibli2j.txt", "w+");
		fputs(mot_secret_2,bibli2);
		rewind(bibli2);
		fclose(bibli2);
	}*/
		ft_lecturebibli();

	printf("  Il vous faudra trouver le mot secret en %d coups maximum.\n\n", pv);
	etoile(mot_secret);
	printf("  Voici le mot a trouver, bonne chance\n");
	while(pv > 0 && comp != 0)
	{
		printf("  %s\n", copy);
		printf("Choisissez une lettre:  ");
		c = lire();
		ft_chr(mot_secret, c);
		ft_compare(mot_secret,copy);
		if(comp == 0)
		{
			printf("BRAVO tu a gagne\n");
		}
		else if(points == 0)
		{
			pv --;
			ft_print_pendu(pv);
		}
	}
	printf("Voulez-vous rejouer\n  OUI : 1\n  NON : 0 \n");
	scanf("%d", &rejouer);
	if(rejouer == 1)
	ft_pendu(10);
}