/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:20:43 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/12 21:16:15 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			*find;

	find = (char *)str;
	i = 0;
	while (find[i] != '\0')
	{
		if ((unsigned char)find[i] == (unsigned char)c)
			return (&find[i]);
		i++;
	}
	if (c == '\0')
		return (&find[i]);
	return (0);
}

static int	ft_putformat(va_list args, const char c)
{
	void	*ptr;

	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
	{
		ptr = va_arg(args, void *);
		if (!ptr)
			return (ft_putstr("0x0"));
		return (ft_putpointer(ptr));
	}
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_putnbrhex(va_arg(args, int), c));
	if (c == 'X')
		return (ft_putnbrhex(va_arg(args, int), c));
	if (c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	unsigned int	len;
	unsigned int	i;
	va_list			args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]) != 0)
		{
			i++;
			len += ft_putformat(args, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
