/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:29:43 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/16 13:55:30 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	unsigned int	j;
	char			*str;

	if (!f)
		return (NULL);
	if (!s)
		return (NULL);
	j = 0;
	i = ft_strlen(s);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	while (i > 0)
	{
		str[j] = (*f)(j, s[j]);
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}
