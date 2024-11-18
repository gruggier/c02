/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:29:15 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/18 12:57:53 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str)
	{
		if (((*str < 32 || *str > 126)) || (*str = '\0'))
		{
			return (i);
		}
		str++;
	}
	return (j);
}

int	main(void)
{
	char	a[] = "Astri1";
	char	b[] = "	";
	char	c[] = "";
	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	printf("%d\n", ft_str_is_printable(c));
}
