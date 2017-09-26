//
// Created by Corina on 13.09.2017.
//

/*
** fuction that checks if the number fits into the int boudries
**	input: num - the number
**		   sign - the sign of the number, 1 if the number is positive
**	return: -1 if the number is type long and positive
**  		    0 if the number is type long and nonpositive
**			1 if the number fits in type int
*/

#include "libft.h"

static int	check_boundries(long int num, int sign)
{
	if (num > 922337203685477580)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

/*
**	function that converts the string argument str to an integer(type int)
**	input: str - the string to be converted
**	return: the number converted multiplied by its sign
*/

int			ft_atoi(const char *str)
{
	long int	sign;
	long int	num;

	num = 0;
	sign = 1;
	while (*str == '\t' || *str == '\v' || *str == '\f' || *str == '\r'
			|| *str == '\n' || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		if (check_boundries(num, sign) != 1)
			return (check_boundries(num, sign));
		num = num * 10 + (*str++ - '0');
	}
	return (num * sign);
}
