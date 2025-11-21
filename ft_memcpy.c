/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:06:59 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/20 22:08:14 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	i = 0;
	j = 0;
	while (i < n)
	{
		temp1[i] = temp2[j];
		j++;
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char dst[] = "jello";
	char src[] = "halllo";
	int i = 0;
	ft_memcpy(dst, src, 2);
	while (i < 5) 
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");
} */