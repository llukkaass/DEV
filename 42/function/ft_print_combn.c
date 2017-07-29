
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_pui(int nbr)
{
	int	i;
	int pui;

	i = 0;
	pui = 1;
	while(i < nbr)
	{
		pui *= 10;
		i++;
	}
	return(pui);
}
void	ft_print_combn(int n)
{
	int	nb;
		
	nb = 0;
	while(nb < ft_pui(n))
	{

		if((nb / 10) < (nb % 10))
		{
		
			if(nb <= 9)
			{
				ft_putchar(nb + '0');	
				ft_putchar(' ');
			}	
		else if(nb > 9 && nb < 100)
			{
				ft_putchar(nb / 10 + '0');
				ft_putchar(nb % 10 + '0');
				ft_putchar(' ');
			}
		}	
		else if(nb >= 100 && nb < 1000)
		{
			if((nb / 100) < (nb / 10 % 10) && (nb / 10 % 10) < (nb % 10))
			{
			ft_putchar(nb / 100 + '0');
			ft_putchar(nb / 10 % 10 + '0');
			ft_putchar(nb % 10 + '0');
			ft_putchar(' ');
			}
		}
		else if(nb > 999 && nb < 10000)
		{
			if((nb / 1000) < (nb / 100 % 10) && (nb / 100 % 10) < (nb /10 %10))
			{
				ft_putchar(nb / 1000 + '0');
				ft_putchar(nb / 100 % 100 + '0');
				ft_putchar(nb / 10 % 10 + '0');
				ft_putchar(nb % 10);
				ft_putchar(' ');
			}
		}
		nb++;
	}

}

int	main(int argc, char **argv)
{
	ft_print_combn(4);
	return(0);
}

