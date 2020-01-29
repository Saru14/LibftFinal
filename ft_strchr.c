/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 18:11:49 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/23 21:55:47 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		return ((char*)s + ft_strlen(s));
	}
	while (s[i])
	{
		if (s[i] == (const char)c)
		{
			return ((char*)&s[i]);
		}
		i++;
	}
	return (NULL);
}
