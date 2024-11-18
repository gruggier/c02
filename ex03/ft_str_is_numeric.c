/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:31:08 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/18 11:37:13 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9') || (*str == '\0'))
		{
			return (i);
		}
		str++;
	}
	return (j);
}
/*
int	main(void)
{
	char a[] = "Astri";
	char b[] = "Astri_1";
	char c[] = "651981";
	char d[] = "";

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	printf("%d\n", ft_str_is_numeric(c));
	printf("%d\n", ft_str_is_numeric(d));
}*/
