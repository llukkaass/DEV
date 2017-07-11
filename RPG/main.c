
#include <stdio.h>
#include "struct.h"

int main(int argc, char const *argv[])
{
	int i = 0;
	Player infos[5];
	while(i < 5)
	{
		printf("Joueur %d  Choisisser un Pseudo :\n", (i + 1));
		scanf("%s", infos[i].pseudo_player);
		printf("Choisisser maintenan un nom de personnage :\n");
		scanf("%s", infos[i].name_perso);
		printf("A present votre classe (guerrier,mage) :\n");
		scanf("%s", infos[i].classe);
		infos[i].niveau = 1;
		infos[i].score = 0;
		i++;
	}
	printf("__________________\n");
	i = 0;
	while(i < 5)
	{
		printf("%s\n",infos[i].pseudo_player);
		printf("%s\n",infos[i].name_perso);
		printf("%s\n",infos[i].classe);
		printf("niveau %d\n", infos[i].niveau);
		printf("score : %d\n", infos[i].score);
		printf("__________________\n");
		i++;
	}
	return 0;
}