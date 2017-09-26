//
// Created by Corina on 13.09.2017.
//

int		ft_numsize(int n)
{
	int	t;

	t = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n)
	{
		n /= 10;
		t++;
	}
	return (t);
}
