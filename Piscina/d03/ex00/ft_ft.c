//
// Created by Corina on 26.09.2017.
//

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int i;

	i = 100;
	ft_ft(&i);
	printf("%d", i);
	return (0);
}
