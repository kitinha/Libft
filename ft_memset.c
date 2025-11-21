/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:19:42 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/21 21:53:07 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)b;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}

/* int	main(void)
{
	char b[] = "jello";
	ft_memset(b, '.', 5);
 	printf ("%s", b);
	printf("\n");
} */