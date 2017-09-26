//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		while (start--)
			s++;
		ft_strncpy(p, s, len);
		p[len] = '\0';
	}
	return (p);
}
