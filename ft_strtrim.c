/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:16:34 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/20 13:00:06 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_in_set(char const *set, char c)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	fin(char const *s1, char const *set)
{
	size_t i;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (is_in_set(set, s1[i]) == 1)
			i--;
		else
			return (i);
	}
	return (0);
}

static size_t	debut(char const *s1, char const *set)
{
	size_t i;

	i = 0;
	while (s1[i])
	{
		if (is_in_set(set, s1[i]) == 1)
			i++;
		else
			return (i);
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!set || !s1)
		return (NULL);
	k = 0;
	i = debut(s1, set);
	j = fin(s1, set);
	if (i >= j)
		return (malloc(0));
	str = malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
