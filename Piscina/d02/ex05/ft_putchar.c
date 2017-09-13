//
// Created by Corina on 13.09.2017.
//
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
