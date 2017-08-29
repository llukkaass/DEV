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
	if(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r' 
		|| str[i] == ' ' || str[i] == '+')
			i++;

		while (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		while (str[i] <= '9' && str[i] >= '0')
		{
			nb = nb * 10 + (str[i] - '0');
			i++;
		}
		return (nb * sign);
	}
}
