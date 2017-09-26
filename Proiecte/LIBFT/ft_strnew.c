//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	p = (char *)ft_memalloc(size + 1);
	return (p);
}
