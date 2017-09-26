int		ft_putchar(char c);

void	ft_top(int x)
{
	ft_putchar('o');
	while (x > 2)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	ft_putchar('|');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	ft_bot(int x)
{
	ft_top(x);
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
		return ;
	ft_top(x);
	while (y > 2)
	{
		ft_middle(x);
		y--;
	}
	if (y > 1)
		ft_bot(x);
}