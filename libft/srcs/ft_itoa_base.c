/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 09:06:09 by isidibe-          #+#    #+#             */
/*   Updated: 2017/12/14 18:23:14 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_itoa_base(int nb, int nb_base)
{
	long long		i;
	long long		j;
	char			*str;
	char			*base;

	if (nb < 0 && nb_base == 10)
		return (ft_itoa(nb));
	base = "0123456789abcdef";
	j = 1;
	i = nb;
	while (i >= nb_base)
	{
		i /= nb_base;
		j++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (j))))
		return (NULL);
	str[j--] = '\0';
	while (j >= 0)
	{
		str[j] = base[nb % nb_base];
		nb /= nb_base;
		j--;
	}
	return (str);
}
