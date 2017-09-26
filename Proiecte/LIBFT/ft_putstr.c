//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	ft_putstr(const char *s)
{
	if (s)
		ft_putstr_fd(s, 1);
}
