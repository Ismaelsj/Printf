/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:10:01 by isidibe-          #+#    #+#             */
/*   Updated: 2017/12/20 17:18:04 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_filit(long long i, long long n, char *str)
{
	long long		j;
	long long		nb;

	j = 0;
	nb = n;
	str[i + 1] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		j = 1;
	}
	while (i > 0)
	{
		str[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	if (j == 1)
		str[i] = '-';
	else
		str[i] = nb + 48;
	return (str);
}

char		*ft_itoa(long long n)
{
	long long	i;
	long long	j;
	char		*str;

	i = 0;
	j = n;
	if (j < 0)
	{
		j = -j;
		i++;
	}
	while (j >= 10)
	{
		i++;
		j = j / 10;
	}
	str = (char*)malloc(sizeof(char) * (i + 1));
	if (str)
		ft_filit(i, n, str);
	return (str);
}
