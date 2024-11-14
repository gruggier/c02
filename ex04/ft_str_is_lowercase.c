/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:41:30 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/14 17:08:45 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
        int i = 0;
        int j = 1;

        while (*str)
        {
                if (!(*str >= 'a' && *str <= 'z') || (*str == '\0'))
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
	char d[] = "";
        printf("%d\n", ft_str_is_lowercase(a));
        printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));
	printf("%d\n", ft_str_is_lowercase(d));
}

