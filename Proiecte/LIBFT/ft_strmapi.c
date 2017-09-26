//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s)
		return (NULL);
	p = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (p)
	{
		i = -1;
		while (s[++i])
			p[i] = f(i, s[i]);
		p[i] = '\0';
	}
	return (p);
}
