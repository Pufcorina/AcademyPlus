//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	if (n)
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
