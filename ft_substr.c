/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:39:24 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/05/23 14:50:38 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	start_len;

	if (start < ft_strlen(s))
		start_len = ft_strlen(s + start);
	if (start > ft_strlen(s))
	{
	sub = malloc(1);
	*sub = '\0';
		return (sub);
	}
	else if (start_len < len)
		sub = malloc(start_len + 1);
	else
		sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (s + start), len + 1);
	return (sub);
}
