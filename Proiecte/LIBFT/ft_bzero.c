//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that places n zero-valued bytes in the string pointed by str
** input: str - pointer to the area where the bytes will be placed
**		 n - number of bytes 0 to be placed
** return: -
*/

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
