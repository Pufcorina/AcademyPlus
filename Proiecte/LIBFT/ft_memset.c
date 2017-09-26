//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that copies the character c to the first n characters
** of the string pointed to by the argument str
** input: str - pointer to the block of memory to fill
**       c - the value to be set
**       n - the number of bytes to be set to the value
** return: returns a pointer to the memory area str
*/

void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*u;
	size_t				l;

	u = str;
	l = n;
	i = 0;
	while (l > 0)
	{
		u[i] = (unsigned char)c;
		i++;
		l--;
	}
	return (u);
}
