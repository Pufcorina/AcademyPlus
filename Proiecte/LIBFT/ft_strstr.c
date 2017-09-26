//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that finds the first occurence of the substring s2 in the string s1
** termination '\0' are not compared
** input: s1 - the main string to be scanned
**        s2 - the small string to be searched with-in s2
** return: a pointer to the first occurence in s1 if s2 is found in it
**		   0 otherwise
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int z;
	int	to_find_size;

	i = 0;
	z = 0;
	to_find_size = 0;
	while (s2[to_find_size])
		to_find_size++;
	if (to_find_size == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s2[z] == s1[i + z])
		{
			if (z == to_find_size - 1)
				return ((char *)(s1 + i));
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
