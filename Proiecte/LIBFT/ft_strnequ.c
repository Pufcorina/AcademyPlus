//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && i < n)
	{
		if (*s1++ != *s2++)
			return (0);
		i++;
	}
	return (1);
}
