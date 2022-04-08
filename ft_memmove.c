/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:49:57 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/04/08 14:53:00 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
 int i;
 
 if (dst > src)
 {
     i = (int)len - 1;
     while (i >= 0)
     {
         *(char*)(dst + i) = *(char*)(src + i);
         i--;
     }
 }
 else
 {
        i = 0;
        while (i < (int)len)
        {
            *(char*)(dst + i) = *(char*)(src + i);
            i++;
        }
 }
    return (dst);
}