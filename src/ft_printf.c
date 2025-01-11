#include "../includes/ft_printf.h"

int	ft_format(va_list arg, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (format == 'p')
		return (ft_putptr(va_arg(arg, void *)));
	if (format == 'd')
		return (ft_putnbr(va_arg(arg, int)));
	if (format == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (format == 'u')
		return (ft_unsigned(va_arg(arg, unsigned int)));
	if (format == 'x')
		return (ft_putlower((long)va_arg(arg, unsigned int)));
	if (format == 'X')
		return (ft_putupper((long)va_arg(arg, unsigned int)));
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
