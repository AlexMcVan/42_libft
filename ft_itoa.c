
//#include "stdlib.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_is_neg(int nb)
{
	if (nb < 0)
		return (1);
	else
		return (0);
}

static int	ft_nb_digit(int nb)
{
	int digit;

	digit = 1;

	while (nb / 10 != 0)
	{
		nb = nb / 10;
		digit ++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int 	reste;
	char	*buffer;
	int	is_neg;
	int	nb_digit;
	int	pos;
	int	n_bis;
	
	pos = 0;
	is_neg = ft_is_neg(n);
	nb_digit = ft_nb_digit(n);
	n_bis = n;
	buffer = calloc(nb_digit + is_neg + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	if (is_neg == 1)
		buffer[0] = '-';
	while (n_bis / 10 != 0)
	{
		buffer[ft_nb_digit(n_bis)+ is_neg - 1] = n_bis % 10 + '0';
		n_bis /= 10;
	}
	buffer [nb_digit + is_neg] = '\0';
	printf("%s\n",buffer);
	return (buffer);
}

int main()
{
	int x = 456;
	printf("%d\n", ft_nb_digit(x));
	ft_itoa(x);
	return (0);

}
