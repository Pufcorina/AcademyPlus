//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that compares the string pointed to by s1 to
** the string pointed to by str2
** input: s1 - the first string to be compared
**        s2 - the second string to be compared
** return: < 0 (s1 < s2)
**         > 0 (s2 < s1)
**         = 0 (s1 = s2)
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while ((unsigned char)s1[i] || (unsigned char)s2[i])
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
