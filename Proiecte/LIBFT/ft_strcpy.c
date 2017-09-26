//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that copies the string pointed to by src to dest
** input: dest - pointer to the destionation string where
** 				 the content will be copied
**        src - the string to be copied
** return: returns a pointer to the destionation string dest
*/

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
