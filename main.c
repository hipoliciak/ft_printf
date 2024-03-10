/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:36:14 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/10 23:08:13 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char c = 'z';
	char str[100] = "All work, no play";
	void *ptr = &c;
	int dec = 2137;
	int n = -1234;
	unsigned int u = 333;
	int x = 42;
	int y = 42;

	printf("%c\n", c);
	ft_printf("%c\n", c);
	printf("%s\n", str);
	ft_printf(str);
	printf("%p\n", ptr);
	ft_printf("%p\n", ptr);
	printf("%d\n", dec);
	ft_printf("%d\n", dec);
	printf("%i\n", n);
	ft_printf("%i\n", n);
	printf("%u\n", u);
	ft_printf("%u\n", u);
	printf("%x\n", x);
	ft_printf("%x\n", x);
	printf("%X\n", y);
	ft_printf("%X\n", y);
	printf("%%\n");
	ft_printf("%%\n");
	return (0);
}
