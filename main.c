/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:36:14 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/03/13 18:36:28 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char c = 'z';
	char c2 = '\0';
	char c3 = 0;
	char str[100] = "All work, no0 play";
	char str1[100] = "All work,\0 no0 play";
	char str2[100] = "";
	char str3[100] = "\0";
	void *ptr = &c;
	void *ptr2 = NULL;
	int dec = 2137;
	int dec2 = 0;
	int n = -12774;
	int n2 = 0;
	unsigned int u = 646356333;
	unsigned int u2 = 0;
	unsigned int u3 = -42;
	int x = 42;
	int x2 = -42;
	int x3 = 0;
	int y = 42;
	int y2 = -42;
	int y3 = 0;

	printf("%c\n", c);
	ft_printf("%c\n", c);
	printf("%c\n", c2);
	ft_printf("%c\n", c2);
	printf("%c\n", c3);
	ft_printf("%c\n", c3);
	printf("%s\n", str);
	ft_printf("%s\n", str);
	printf("%s\n", str1);
	ft_printf("%s\n", str1);
	printf("%s\n", str2);
	ft_printf("%s\n", str2);
	printf("%s\n", str3);
	ft_printf("%s\n", str3);
	printf("%p\n", ptr);
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr2);
	ft_printf("%p\n", ptr2);
	printf("%d\n", dec);
	ft_printf("%d\n", dec);
	printf("%d\n", dec2);
	ft_printf("%d\n", dec2);
	printf("%i\n", n);
	ft_printf("%i\n", n);
	printf("%i\n", n2);
	ft_printf("%i\n", n2);
	printf("%u\n", u);
	ft_printf("%u\n", u);
	printf("%u\n", u2);
	ft_printf("%u\n", u2);
	printf("%u\n", u3);
	ft_printf("%u\n", u3);
	printf("%x\n", x);
	ft_printf("%x\n", x);
	printf("%x\n", x2);
	ft_printf("%x\n", x2);
	printf("%x\n", x3);
	ft_printf("%x\n", x3);
	printf("%X\n", y);
	ft_printf("%X\n", y);
	printf("%X\n", y2);
	ft_printf("%X\n", y2);
	printf("%X\n", y3);
	ft_printf("%X\n", y3);
	printf("%%\n");
	ft_printf("%%\n");
	printf("%%%s%d%p\n", str, dec, ptr);
	ft_printf("%%%s%d%p\n", str, dec, ptr);
	return (0);
}
