/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:19:22 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/20 18:16:25 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (neddle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] && (i + j <= len))
	{
		while (haystack[i + j] == neddle [j])
			j++;
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char haystack[] = "meow meow frog frog au au";
	char needle[] = "frog";
	printf("%s\n", ft_strnstr(haystack, needle, 14));
	printf("%s\n", strnstr(haystack, needle, 14));
}
 */