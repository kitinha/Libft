/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:18:26 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/24 18:15:18 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (i == dstsize)
		return (j + i);
	if (i + j <= dstsize - 1)
	{
		while (src[k] && i + k <= dstsize - 1)
		{
			dst[i + k] = src[k];
			k++;
		}
	}
	else if (i + j > dstsize)
	{
		while (src[k] && k <= dstsize - i - 1)
		{
			dst[i + k] = src[k];
			k++;
		}
	}
	dst[i + j] = '\0';
	return (j + i);	
}

int main(void)
{
	char dst[] = "Hello!";
	char src[] = " How are you?";
	char dst2[] = "Hello!";
	char src2[] = " How are you?";
	printf("%zu\n", ft_strlcat(dst, src, 7));
	printf("%zu\n", strlcat(dst2, src2, 7));
}