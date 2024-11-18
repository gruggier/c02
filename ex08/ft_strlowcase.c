/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:25:29 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/18 10:30:38 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] = str[i] - ('A' - 'a');
                }
                i++;
        }
        return (str);
}

int     main()
{
        char a[] = "Hello World";

        printf("%s", ft_strlowcase(a));
        return(0);
}
