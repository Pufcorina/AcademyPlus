//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		dest_size;

	i = 0;
	dest_size = 0;
	while (s1[dest_size])
		dest_size++;
	while (i < n && s2[i])
	{
		s1[dest_size] = s2[i];
		dest_size++;
		i++;
	}
	s1[dest_size] = '\0';
	return (s1);
}
