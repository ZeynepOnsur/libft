/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zonsur <zonsur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:05:45 by zonsur            #+#    #+#             */
/*   Updated: 2023/07/18 15:09:02 by zonsur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			i;

	str = (unsigned char *)s1;
	str1 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] == str1[i])
		{
			i++;
		}
		else
			return (str[i] - str1[i]);
	}
	return (0);
}
