#include"function.h"

void	ft_print_combn(int n)
{
	char tab[9];

	tab[0] = '/';
	tab[1] = '0';
	tab[2] = '0';
	tab[3] = '0';
	tab[4] = '0';
	tab[5] = '0';
	tab[6] = '0';
	tab[7] = '0';
	tab[8] = '0';

	while(tab[0]++ < '2')
	{
		tab[1] == tab[0];
		while(tab[1]++ < '2')
		{
			tab[2] = tab[1];
			while(tab[2] ++ < '3')
			{
				tab[3] = tab[2];
				while(tab[3]++ < '4')
				{
					tab[4] = tab[3];
					while(tab[4]++ < '5')
					{
						tab[5] = tab[4];
						while(tab[5]++ < '6')
						{
							tab[6] = tab[5];
							while(tab[6]++ < '7')
							{
								tab[7] = tab[6];
								while(tab[7]++ < '8')
								{
									tab[8] = tab[7];
									while(tab[8]++ < '9')
									{
										
										ft_putchar(tab[0]);
										ft_putchar(tab[1]);
										ft_putchar(tab[2]);
										ft_putchar(tab[3]);
										ft_putchar(tab[4]);
										ft_putchar(tab[5]);
										ft_putchar(tab[6]);
										ft_putchar(tab[7]);
										ft_putchar(tab[8]);
										ft_putchar(',');
										ft_putchar(' ');
									}
								}
							}
						}
					}
				}
			}
		}
	}

}


