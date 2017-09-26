//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s != NULL)
	{
		while (*s)
			*s++ = '\0';
	}
}
