/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:57:08 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/21 21:53:22 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	unsigned char		cc;

	temp = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temp[i] == cc)
			return ((void *)&temp[i]);
		i++;
	}
	return (NULL);
}

/*  int main(void)
{
    const char str[] = "/|\x12\xff\x09\0\x42\042\0\42|\\";
    const char ch = '\0';
    size_t len = strlen(str);

    char* result = (char*)memchr(str, ch, len);
	char* result2 = (char*)ft_memchr(str, ch, len);
    printf("'%c' Orig found at %ld, in adress %p\n", ch, result - str, result);
	printf("'%c' Mine found at %ld, in adress %p\n", ch, result2 - str, result2);
} */
