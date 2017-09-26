//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	if (s)
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
