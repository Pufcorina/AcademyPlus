//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n < -9)
			ft_putnbr_fd((0 - (unsigned int)n) / 10, fd);
		c = (n % 10) * -1 + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
	}
}
