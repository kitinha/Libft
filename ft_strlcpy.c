/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:50:31 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/27 21:54:28 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (k + 1 <= dstsize)
	{
		dst[i] = src[k];
		k++;
	}
	dst[i] = '\0';
	return (j);
}

/* int	main(void)
{
	char dst[] = "jello";
	char src[] = "halllo";
	char dst2[] = "Hello!";
	char src2[] = " How are you?";
	printf("%zu\n", ft_strlcpy(dst, src, 2));
	printf("%zu\n", strlcpy(dst2, src2, 2));
} */