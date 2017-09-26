//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char			*p;
	unsigned int	i;

	if (!s)
		return (NULL);
	p = ft_stralloc(s);
	if (p)
	{
		i = -1;
		while (s[++i])
			p[i] = f(s[i]);
		p[i] = '\0';
	}
	return (p);
}
