/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:46:21 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/14 16:54:32 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int i = 0;
        int j = 1;

        while (*str)
        {
                if (!((*str >= 'A' && *str <= 'Z')) || (*str = '\0'))
                {
                        return(i);
                }
                *str++;
        }
        return (j);
}

int     main(void)
{
        char a[] = "Astri";
        char b[] = "Astri_1";
        char c[] = "astri";
	char d[] = "ASTRI";
	char e[] = "";
        printf("%d\n", ft_str_is_uppercase(a));
        printf("%d\n", ft_str_is_uppercase(b));
        printf("%d\n", ft_str_is_uppercase(c));
	printf("%d\n", ft_str_is_uppercase(d));
	printf("%d\n", ft_str_is_uppercase(e));
}

