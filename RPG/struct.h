#ifndef DEF_STRUCT
#define DEF_STRUCT
#define classe1 guerrier
#define classe2 mage

typedef struct Player Player;

struct Player
{
	int niveau;
	int score;

	char pseudo_player[30];
	char name_perso[30];
	char classe[10];

};

void ftrien();

#endif