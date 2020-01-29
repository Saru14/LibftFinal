/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:48:59 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/14 17:34:45 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(unsigned int nb)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		neg;
	int		size;
	char	*str;
	long	nb;

	nb = n;
	neg = nb < 0 ? 1 : 0;
	if (nb < 0)
		nb = nb * -1;
	size = get_size(nb) + neg + (nb == 0 ? 1 : 0);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = 0;
	if (neg == 1)
		str[0] = '-';
	while (size > neg)
	{
		str[size - 1] = (nb % 10) + 48;
		nb = nb / 10;
		size--;
	}
	return (str);
}
