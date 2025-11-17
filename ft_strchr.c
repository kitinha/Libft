/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:01:46 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/17 17:12:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = c;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

/* int	main(void)
{
	char s[] = "Welcome to 42! You'll be happy here.";
	printf("%s\n", ft_strchr(s, 'o'));
	printf("%s\n", strchr(s, 'o'));
} */