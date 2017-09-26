//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that checks if the passed character is a decimal digit character
** input: c - ascii code of the character
** return: 1 - if the character is a decimal digit, 0 otherwise
*/

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
