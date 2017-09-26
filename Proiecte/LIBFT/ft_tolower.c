//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
** function that turns an uppercase string into a lowercase string
** input: c - integer(ascii code) the letter
** return: the char c converted
*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}
