//
// Created by Corina on 26.09.2017.
//

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		if (i < size -1)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
