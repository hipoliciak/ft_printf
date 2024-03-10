/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:36:23 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/10 23:23:53 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putformat(va_list args, char c)
{
	if (c == 'c')
		return ();
	if (c == 's')
		return ();
	if (c == 'p')
		return ();
	if (c == 'd')
		return ();
	if (c == 'i')
		return ();
	if (c == 'u')
		return ();
	if (c == 'x')
		return ();
	if (c == 'X')
		return ();
	if (c == '%')
		return ();
	return (-1);
}
