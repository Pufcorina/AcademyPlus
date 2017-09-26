//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (s)
	{
		while (*s)
			ft_putchar_fd(*s++, fd);
	}
}
