/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:17:33 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/04/08 16:20:47 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] == '\0')
    {
        if (s[i] == (char)c)
            return ((char*)(s + i));
        i++;
    }
    if (s[i] == (char)c)
        return ((char*)(s + i));
    return (NULL);
}
