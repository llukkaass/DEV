#include <unistd.h>
#include <stdio.h>

typedef struct Element Element;
typedef struct Liste Liste;
typedef struct Fin Fin;

struct Element
{
	int nombre;
	Element *suivant;
}
struct Liste
{
	Element *premier;
}

Liste *initialisation()
{
	Liste *liste = malloc(sizeof(*liste));
	Element *element = malloc(sizeof(*element));

	if(liste == NULL )
}

int	main(int argc, char **argv)
{
	
	return(0);
}
