/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:02:11 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/20 18:33:27 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*ccc;

	cc = c;
	i = 0;
	ccc = 0;
	while (s[i])
	{
		if (s[i] == cc)
			ccc = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		ccc = (char *)&s[i];
	return (ccc);
}

/* int	main(void)
{
	char s[] = "Welcome to 42! You'll be happy here.";
	printf("%s\n", ft_strrchr(s, 'y'));
	printf("%s\n", strrchr(s, 'y'));
} */