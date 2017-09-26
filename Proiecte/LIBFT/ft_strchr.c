//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*p;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			p = (char *)&s[i];
			return (p);
		}
		i++;
	}
	if (c == s[i])
	{
		p = (char *)&s[i];
		return (p);
	}
	return (0);
}
