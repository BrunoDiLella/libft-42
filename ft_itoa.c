/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:28:09 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/04/29 10:29:21 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_size(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (2);
	else if (n < 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char			*dest;
	int				neg;
	unsigned int	size;

	neg = n < 0;
	size = int_size(n);
	dest = malloc(sizeof(char) * (size));
	if (!dest)
		return (NULL);
	dest[--size] = '\0';
	if (!n)
		dest[--size] = '0';
	while (n)
	{
		size--;
		dest[size] = ((-neg + !neg) * (n % 10) + 48);
		n = n / 10;
	}
	if (neg)
		dest[--size] = '-';
	return (dest);
}
