/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 16:43:00 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/10 16:50:45 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(1, sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}
