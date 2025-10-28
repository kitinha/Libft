/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:19:34 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/28 18:49:05 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while ((i < n) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	while (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
	unsigned int n = 4;
	char s1[] = "hello";
	char s2[] = "helllo";
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
} */