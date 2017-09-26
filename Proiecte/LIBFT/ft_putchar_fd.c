//
// Created by Corina on 13.09.2017.
//

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
