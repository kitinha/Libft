/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:19:42 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/27 21:53:14 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)b;
	while (temp[i] != '\0' && i < len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char b[] = "jello";
	int i = 0;
	ft_memset(b, 'k', 5);
	while (i < 5) 
	{
		printf("%c", b[i]);
		i++;
	}
	printf("\n");
} */