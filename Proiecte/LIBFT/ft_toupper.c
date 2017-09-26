//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that turns a lowercase letter into an uppercase
** input: c - the ascii code of the letter
** return: the character c converted
*/

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}
