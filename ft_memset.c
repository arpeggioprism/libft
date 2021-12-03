/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:54:49 by jshin             #+#    #+#             */
/*   Updated: 2021/11/25 18:14:41 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
 
    if (!s)
        return (NULL);
    i = 0;
    while (i < n)
        ((unsigned char *)s)[i++] = (unsigned char)c;
    return (s);
}
