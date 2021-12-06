/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strscpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:44:58 by jshin             #+#    #+#             */
/*   Updated: 2021/12/06 16:46:50 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strscpy(char *word, char *start, char const *end)
{
	char	*temp;

	temp = word;
	while (start != end)
	{
		*temp = *start;
		temp++;
		start++;
	}
	*temp = '\0';
}
