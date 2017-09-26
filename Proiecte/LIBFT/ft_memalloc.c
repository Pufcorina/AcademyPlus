//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	if (size == 0)
		return ((void *)0);
	p = malloc(size);
	if (p)
	{
		ft_bzero(p, size);
		return (p);
	}
	return (NULL);
}
