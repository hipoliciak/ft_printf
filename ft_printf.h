/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:34:20 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/11 19:19:52 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbrhex(int n, char c);
int		ft_putpointer(void *ptr);
int		ft_putstr(char *str);
int		ft_putunsigned(unsigned int n);
#endif