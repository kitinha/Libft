/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:47:16 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/28 19:25:51 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*temp1;
	char	*temp2;

	temp1 = (char *)dst;
	temp2 = (char *)src;
	i = 0;
	j = 0;
	while (temp1[j] && temp2[i])
	{
		j++;
		i++;
	}
	if (temp1)
	return (dst);
}
