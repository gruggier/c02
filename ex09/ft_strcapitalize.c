/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:06:58 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/18 11:07:18 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i == 0 || (str[i-1] < '0' || (str[i-1] > '9' && str[i-1] < 'A') || (str[i-1] > 'Z' && str[i-1] < 'a') || str[i-1] > 'z'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - ('a' - 'A');
            }
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + ('a' - 'A');
            }
        }
        i++;
    }
    return (str);
}

int main()
{
    char a[] = "hello world! 42paris is beautiful.";

    printf("%s\n", ft_strcapitalize(a));
    return 0;
}
