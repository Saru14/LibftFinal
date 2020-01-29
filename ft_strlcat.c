/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 14:51:44 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/15 13:27:16 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t leng_dst;
	size_t leng_src;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (src[i] && leng_dst + i < size - 1)
	{
		dst[leng_dst + i] = src[i];
		i++;
	}
	dst[leng_dst + i] = '\0';
	return (leng_dst + leng_src);
}
