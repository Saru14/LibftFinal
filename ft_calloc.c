/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:24:46 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/14 16:39:36 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *str;

	str = malloc(sizeof(char) * nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
