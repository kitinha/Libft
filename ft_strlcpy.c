/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:50:31 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/30 20:30:29 by ineguill         ###   ########.fr       */
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
	if (!dst || !src)
		return (NULL);
	while (src[j])
		j++;
	if (k + 1 < dstsize)
	{
		while (src[k])
		{
			dst[i] = src[k];
			k++;
		}
	}
	else
		dst[i] = dstsize - 1;
	dst[i] = '\0';
	return (j);
}

/* int	main(void)
{
	char dst[] = "jelo";
	char src[] = "hlo";
	char dst2[] = "jelo";
	char src2[] = "hlo";
	printf("%zu\n", ft_strlcpy(dst, src, 2));
	printf("%zu\n", strlcpy(dst2, src2, 2));
} */
