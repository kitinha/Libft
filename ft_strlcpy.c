/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:50:31 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/25 17:37:06 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;

	k = 0;
	i = 0;
	j = ft_strlen(src);
	if (dstsize == 0)
		return (j);
	else
	{
		while (k < dstsize - 1 && src[k] != '\0')
		{
			dst[i] = src[k];
			i++;
			k++;
		}
	}
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
