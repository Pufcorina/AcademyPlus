//
// Created by Corina on 26.09.2017.
//

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;	
	}
	return (i);
}
