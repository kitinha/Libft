/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:47:16 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/30 20:14:38 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*temp1;
	char	*temp2;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	temp1 = (char *)dst;
	temp2 = (char *)src;
	if (temp1[i] > temp2[i] || temp2[i] > temp1[i])
	{
		while (len-- > 0)
		{
			temp1[len] = temp2[len];
		}
	}
	else
	{
		while (i++ < len)
		{
			temp1[i] = temp2[i];
		}
	}
	return (dst);
}

/* int	main(void)
{
	char dst[] = "c";
	char src[] = "a";
	int i = 0;
	ft_memmove(dst, src, 3);
	while (i < 3) 
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");
} */
