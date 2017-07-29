#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	for(i = 0; str[i]; i++)
	{
	}
	return(i);
}

void ft(char *str)
{
	write(1, str, ft_strlen(str));
}

int main(int argc, char **argv)
{
	char *str;
	
	str = argv[2];
	ft(str);
	return(0);
}
