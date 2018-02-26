/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:39:35 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/20 13:39:48 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcdup(const char *s1, size_t c)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	j = 0;
	i = ft_strclen(s1, c);
	if (!(str = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	while (j < i)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
