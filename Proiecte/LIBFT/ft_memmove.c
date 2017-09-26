//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*source;
	char		*dst;
	size_t		i;

	i = -1;
	source = (char *)src;
	dst = (char *)dest;
	if (source < dst)
		while ((int)(--n) >= 0)
			*(dst + n) = *(source + n);
	else
		while (++i < n)
			*(dst + i) = *(source + i);
	return (dst);
}
