//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

/*
**  function that checks if the passed character is alphabetic
** input: c - the ascii code of the character
** return: 1 if it is alphabetic, 0 otherwise
*/

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
