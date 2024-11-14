/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:17:45 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/14 19:45:05 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		if (!(*str >= 'A' && *str <= 'Z'))
		if (!(*str == '\0'))
		{
			return(i);
		}
		*str++;
	}
	return (j);
}

int	main(void)
{
	char a[] = "Astri";
	char b[] = "Astri_1";
	char c[] = "";
	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
}
