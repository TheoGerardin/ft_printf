#include "../includes/ft_printf.h"

int	ft_putlower(long n)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		return (i + ft_putlower(-n));
	}
	else if (n < 16)
		return (i + ft_putchar(hex[n]));
	else
	{
		i = ft_putlower(n / 16);
		return (i + ft_putlower(n % 16));
	}
}

int	ft_putupper(long n)
{
	int		i;
	char	*hex;

	hex = "0123456789ABCDEF";
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		return (i + ft_putupper(-n));
	}
	else if (n < 16)
		return (i + ft_putchar(hex[n]));
	else
	{
		i = ft_putupper(n / 16);
		return (i + ft_putupper(n % 16));
	}
}

int	ft_putptr(void *nb)
{
	int					i;
	int					j;
	unsigned long int	n;
	char				*hex;
	char				tab[16];

	if (!nb)
		return (ft_putstr("(nil)"));
	hex = "0123456789abcdef";
	n = (unsigned long int)nb;
	i = 0;
	j = 0;
	while (n != 0 || j == 0)
	{
		tab[j++] = hex[n % 16];
		n /= 16;
	}
	i += ft_putstr("0x");
	while (j)
		i += ft_putchar(tab[--j]);
	return (i);
}
