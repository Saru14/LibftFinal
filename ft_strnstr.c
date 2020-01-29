/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:59:49 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/13 21:54:39 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (big[i] && len > i)
	{
		if (big[i] == '\0')
			return (NULL);
		while (little[j] == big[i + j] && len > i + j)
		{
			j++;
			if (ft_strlen(little) == j)
				return ((char*)big + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
