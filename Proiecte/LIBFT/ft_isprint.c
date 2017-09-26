//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that checks whether the passed character is printable
** input: c - the ascii code of the character
** return: 1 if the character c is printable, 0 otherwise
*/

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
