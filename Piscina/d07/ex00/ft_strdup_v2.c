//
// Created by Corina on 26.09.2017.
//

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = (char*)malloc(sizeof(*dest) * i);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char str[] = "abcd";
	printf("%s", ft_strdup(str));
	return(0);
}
