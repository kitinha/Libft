/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:19:42 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/24 19:24:34 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t	i;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return ((void *)b);
}

int	main(void)
{
	char *b = "jello";
	int i = 0;
	ft_memset(b, 'A', 5);
	while (i < 5) {
		printf("%c\n", b[i]);
		i++;
	}
}