/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:57:23 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/28 18:49:12 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*temp1;
	char	*temp2;

	temp1 = (char *)s1;
	temp2 = (char *)s2;
	i = 0;
	while ((i < n) && (temp1[i] != '\0') && (temp2[i] != '\0'))
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	while (i < n)
	{
		return (temp1[i] - temp2[i]);
	}
	return (0);
}

/* int main()
{
	unsigned int n = 8;
	char s1[] = "hello";
	char s2[] = "hello";
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
} */