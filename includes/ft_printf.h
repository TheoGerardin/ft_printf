#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_unsigned(unsigned int n);
int	ft_putlower(long n);
int	ft_putupper(long n);
int	ft_putptr(void *nb);
int	ft_format(va_list arg, char format);
int	ft_printf(const char *str, ...);

#endif
