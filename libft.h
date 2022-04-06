/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:08:34 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/04/06 14:15:03 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
    void    *contents;
    struct s_list   *next;
}                   t_list;

typedef struct s_split_next
{
        size_t start;
        size_t length;
}           t_split_next;

int				ft_isalpha(int c);

#endif

