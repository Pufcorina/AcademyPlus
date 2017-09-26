//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*p;
	char	*c;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	p = (char *)malloc((sizeof(char)) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
	c = p;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return (c);
}
