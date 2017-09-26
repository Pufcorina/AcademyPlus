//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that appends the string pointed to by src to the end
** of the string pointed to by dest
** input: dest - pointer to the destination string
**        src - the string to be appended
** return: a pointer to the resulting string dest
*/

char	*ft_strcat(char *dest, char *src)
{
	char *i;
	char *j;

	i = dest;
	j = src;
	while (*i != '\0')
	{
		i++;
	}
	while (*j != '\0')
	{
		*i = *j;
		i++;
		j++;
	}
	*i = '\0';
	return (dest);
}
