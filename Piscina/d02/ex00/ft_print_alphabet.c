//
// Created by Corina on 13.09.2017.
//
void    ft_putchar(char c);

void	ft_print_alphabet(void)
{
    int i;

    i = 'a';
    while (i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
}

int	main(void)
{
    ft_print_alphabet();
    return (0);
}
