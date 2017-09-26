//
// Created by Corina on 13.09.2017.
//

int		ft_countwords(const char *s, char c)
{
	int	w;
	int	i;

	w = 0;
	while (*s)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		if (i > 0)
			w++;
	}
	return (w);
}
