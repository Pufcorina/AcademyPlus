//
// Created by Corina on 13.09.2017.
//
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putstr("-214748364");
        nb = 8;
    }
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

void	ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

int     main(void)
{
    ft_putnbr(-2147483648); //min int value
    return (0);
}