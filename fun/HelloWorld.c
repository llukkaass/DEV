#include "unistd.h"

void ft_putchar(char c)
{
	write(1, &c ,1);	
}

void ft_strlen(char *str)
{
	int i;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	
}
int main(int argc, char const *argv[])
{	
	ft_strlen("Hello World");
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('\n');
	return 0;
}