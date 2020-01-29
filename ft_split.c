/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:13:12 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/20 13:00:47 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		nombre(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s[i] != c && s[i] != '\0')
		j++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}

static char			*ft_free(char **mot, size_t k)
{
	k = k - 1;
	while (k > 0 || k == 0)
	{
		free(mot[k]);
		k--;
	}
	free(mot);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	j;
	char	**mot;

	i = -1;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(mot = malloc(sizeof(char*) * (nombre(s, c) + 1))))
		return (NULL);
	while (s[++i])
		if (s[i] != c)
		{
			while (s[i + j] && s[i + j] != c)
				j++;
			if (!(mot[k] = ft_substr(s, i, j)))
				ft_free(mot, k);
			k++;
			i = i + j - 1;
			j = 0;
		}
	mot[k] = NULL;
	return (mot);
}
