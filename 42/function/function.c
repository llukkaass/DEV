/*

		fuction

					*/
#include <unistd.h>		

int	ft_strlen(char	*str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}



//BUG NB NEGATIF 
void	ft_putnbr(int nb)
{
	if(nb == -2147483647)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483647);
	}
	else if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}



void	ft_print_comb(void)
{
	int index = 012;
	int u = 0;
	int d = 0;
	int c = 0;
	while(index <= 789)
	{
		u = (index % 10);
		d = (index % 100 / 10);
		c = (index / 100);
		if(c != u && c != d && d != u && c < d && d < u)
		{		
			ft_putchar(c + '0');
			ft_putchar(d + '0');
			ft_putchar(u +'0');
			ft_putchar(' ');
		}

			index ++;
	}

}