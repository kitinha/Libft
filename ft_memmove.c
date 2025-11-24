/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:47:16 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/20 18:02:22 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	if (temp1[i] >= temp2[i])
	{
		while (len-- > 0)
		{
			temp1[len] = temp2[len];
		}
	}
	else
	{
		while (i < len)
		{
			temp1[i] = temp2[i];
			i++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char dst[] = "c";
	char src[] = "hello";
	ft_memmove(dst, src, 6);
	printf("%s", dst);
	printf("\n");
	return (0);
} */
