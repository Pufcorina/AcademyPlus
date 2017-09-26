//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	ft_putendl(const char *s)
{
	if (s)
		ft_putendl_fd(s, 1);
}
