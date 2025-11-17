/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:57:23 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/17 17:10:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*temp1;
	char	*temp2;

	i = 0;
	temp1 = (char *)s1;
	temp2 = (char *)s2;
	while ((i < n))
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}

/* int main()
{
	unsigned int n = 2;
	char s2[] = "";
	char s1[] = "";
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
} */