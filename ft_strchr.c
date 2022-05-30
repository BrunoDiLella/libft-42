/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:17:33 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/05/23 14:49:48 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_copy;
	char	*s_copy;

	c_copy = (unsigned char) c;
	s_copy = (char *)s;
	i = 0;
	while (s_copy[i] != '\0')
	{
		if (s_copy[i] == c_copy)
			return (s_copy + i);
		i++;
	}
	if (c_copy == '\0')
		return (s_copy + i);
	return (NULL);
}
