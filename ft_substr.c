/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zonsur <zonsur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:32:35 by zonsur            #+#    #+#             */
/*   Updated: 2023/07/15 14:02:05 by zonsur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[start + i])
			i++;
		dest = (char *)malloc(sizeof(char) * i + 1);
		if (!dest)
			return (NULL);
		j = 0;
		while (j < i)
		{
			dest[j] = s[start + j];
			j++;
		}
		dest[j] = '\0';
		return (dest);
	}
	return (NULL);
}

// int main()
// {
//     char *dest = "zeyneponsur";
//     printf("%s", ft_substr(dest, 3,7));
// }
