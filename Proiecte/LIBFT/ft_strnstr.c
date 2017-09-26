//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*src == 0)
		return ((char *)dst);
	while (dst[i] && i < len)
	{
		j = 0;
		while (dst[i + j] == src[j] && i + j < len)
		{
			if (src[j + 1] == '\0')
				return ((char *)(dst + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
