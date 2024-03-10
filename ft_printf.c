/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:20:43 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/10 23:22:51 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
			len++;
		}
		else
		{
			i++;
			len += ft_putformat(args, str[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
