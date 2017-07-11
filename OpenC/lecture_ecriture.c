
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

#define TAILLE_MAX 1000


int main(int argc, char const *argv[])
{
	FILE* fichier = NULL;
	char chaine[TAILLE_MAX] = "";

	fichier = fopen("test.txt", "w+");	

	if (fichier != NULL)
	{
		
		fprintf(fichier,"Hello World");
		fgets(chaine, TAILLE_MAX, fichier);
		printf("%s", chaine);
		fclose(fichier);
	}
	else
	{
		printf("Erreur lors du chargement du fichier \n");
	}
	return 0;
}