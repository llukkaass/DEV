#include <stdlib.h>
#include <stdio.h>

char *mot_secret = "BONJOURS";
char *reponse = "BONJOURS";
int	pv = 10;

// assigne a reponse des '*' a la place des char
void	ft_assigne_etoile()
{
	int nnb = 0;

	while(reponse[nnb])
	{
		reponse[nnb] == '*';
		nnb++;
	}
	printf("%s\n", reponse);
}


void	ft_affiche(char *str)
{
	int nb = 0;

	while(str[nb])
	{
		nb++;
		printf("%s", reponse);
	}
		
		printf("\n%s\n", str);
		printf("%d\n", pv);
}

//conpare la chaine secrette a la lettre entree, donne un retour pour les pv et assigne la lettre si elle est bonne
void	ft_compare(char *origine, char lettre_entree)
{
	int i = 0;
	char *str = "";

	while(origine[i])
	{
		if(origine[i] == lettre_entree)
		{
			*str = *str + origine[i];
		}
		i++;
	}
	if (str == "")
	{
		pv - 1;
	}

}