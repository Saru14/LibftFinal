/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:34:08 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/23 21:11:22 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}
