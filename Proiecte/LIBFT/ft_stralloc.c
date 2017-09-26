//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

char	*ft_stralloc(const char *s)
{
	return ((char *)malloc(sizeof(char) * (ft_strlen(s) + 1)));
}
