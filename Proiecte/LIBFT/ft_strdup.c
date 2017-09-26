//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *d;
	char *s;

	s = (char *)s1;
	d = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, s);
	return (d);
}
