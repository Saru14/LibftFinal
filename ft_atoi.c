/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbodson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:35:23 by jbodson           #+#    #+#             */
/*   Updated: 2020/01/24 17:51:21 by jbodson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

int		ft_atoi(const char *str)
{
	int						i;
	int						neg;
	long					nb;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		i++;
		neg = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		if (nb < 0)
			return ((neg == -1) ? 0 : -1);
		i++;
	}
	return (nb * neg);
}
