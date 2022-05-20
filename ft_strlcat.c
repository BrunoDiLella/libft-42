/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:58:44 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/04/25 15:35:53 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_length;
    size_t src_length;

    src_length = ft_strlen(src);
    dest_length = ft_strlen(dest);
    j = dest_length;
    i = 0;
    if (dest_length < size - 1 && size > 0)
    {
        while (src[i] && dest_length + i < size - 1)
        {
            dest[j] = src[i];
            j++;
            i++;
        }
        dest[j] = 0;
    }
    if (dest_length >= size)
        dest_length = size;
    return (dest_length + src_length);
}
