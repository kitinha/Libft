/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:57:08 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/20 20:04:24 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*temp;
	unsigned char		cc;

	temp = (unsigned const char *)s;
	cc = c;
	i = 0;
	while (temp[i] && i < n)
	{
		if (temp[i] == cc)
			return ((void *)&temp[i]);
		i++;
	}
	return (NULL);
}

/*  int main(void)
{
    const char str[] = "Welcome to India";
    const char ch = 't';
    size_t len = strlen(str);

    char* result = (char*)memchr(str, ch, len);
	char* result2 = (char*)ft_memchr(str, ch, len);
    printf("'%c' Orig found at %ld, in adress %p\n", ch, result - str, result);
	printf("'%c' Mine found at %ld, in adress %p\n", ch, result2 - str, result2);
    re */
