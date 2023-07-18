/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zonsur <zonsur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:11:19 by zonsur            #+#    #+#             */
/*   Updated: 2023/07/15 14:00:00 by zonsur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s1;

	s1 = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (char)c)
		{
			return ((void *)(s1 + i));
		}
		i++;
	}
	return (0);
}
