/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:53:41 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/16 17:53:57 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *s, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
