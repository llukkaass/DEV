#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	/*while(str[i])
	{
		i++;
	}*/
	for(i = 0; str[i]; i++)
	{
	}
	return(i);
}
void ft(char *str)
{
	write(1, str, ft_strlen(str));
}

int main()
{
	char *str;

	str = "yoloo\nYOLOOOOo";
	ft(str);
	return(0);
}
