/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:05:33 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/08 14:47:47 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0')
	{
		return ((char*)s + ft_strlen(s));
	}
	while (i >= 0)
	{
		if (s[i] == (const char)c)
		{
			return ((char*)&s[i]);
		}
		i--;
	}
	return (NULL);
}
