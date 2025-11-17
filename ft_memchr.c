/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:57:08 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/17 17:09:42 by codespace        ###   ########.fr       */
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
	if (!s)
		return (NULL);
	while (i <= n)
	{
		if (temp[i] == cc)
			return ((void *)&temp[i]);
		i++;
	}
	if (temp[i] == cc)
		return ((void *)&temp[i]);
	return (NULL);
}
/* 
 int main(void)
{
    const char str[] = "Welcome to India";
	// const char str2[] = "Welcome to India";
    const char ch = 't';
    size_t len = strlen(str);

    char* result = (char*)memchr(str, ch, len);
	char* result2 = (char*)ft_memchr(str, ch, len);
    printf("'%c' Orig found at %ld, in adress %p\n", ch, result - str, result);
	printf("'%c' Mine found at %ld, in adress %p\n", ch, result2 - str, result2);
    return 0;
}  */