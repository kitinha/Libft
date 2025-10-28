/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:57:08 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/28 18:32:37 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	cc;

	temp = (unsigned char *)s;
	cc = c;
	i = 0;
	while (i <= n)
	{
		if (temp[i] == cc)
			return ((void *)&s[i]);
		i++;
	}
	if (temp[i] == cc)
		return ((void *)&s[i]);
	return (NULL);
}

/* int	main(void)
{
	char s[] = "Welcome to 42! You'll be happy here.";
	printf("%c\n", ft_memchr(s, 'o', 6));
	printf("%c\n", memchr(s, 'o', 6));
} */
int main(void)
{
    const char str[] = "Welcome to India";
	const char str2[] = "Welcome to India";
    const char ch = 't';
    size_t len = strlen(str);
	size_t len2= strlen(str2);

    char* result = (char*)memchr(str, ch, len);
	char* result2 = (char*)ft_memchr(str2, ch, len2);
    printf("'%c' Orig found at position %ld\n", ch, result - str);
	printf("'%c' Mine found at position %ld\n", ch, result2 - str2);
    return 0;
}