//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*p;
	size_t			i;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			p = &a[i];
			return (p);
		}
		i++;
	}
	return (0);
}
