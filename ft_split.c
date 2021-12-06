/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshin <jshin@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:45:46 by jshin             #+#    #+#             */
/*   Updated: 2021/12/06 18:45:05 by jshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcnt(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (cnt);
}

char	**ft_mal_error(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i])
	{
		free(ret);
		i++;
	}
	free(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**ret;
	const char	*start;
	size_t		idx;

	idx = 0;
	ret = (char **)malloc(sizeof(char *) * (ft_wordcnt(s, c) + 1));
	if (!s || !ret)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s != c && *s)
				s++;
			ret[idx] = (char *)malloc(sizeof(char) * (s - start + 1));
			if (!ret)
				return (ft_mal_error(ret));
			ft_strlcpy(ret[idx++], start, s - start + 1);
		}
		else
			s++;
	}
	ret[idx] = 0;
	return (ret);
}
