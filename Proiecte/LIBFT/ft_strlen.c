//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

size_t	ft_strlen(char const *c)
{
	size_t i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}
