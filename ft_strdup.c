/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:42:19 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/30 19:01:08 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *s) 
{
	char *ret;

	if (!s)
		return (NULL);
	ret = ft_calloc((ft_strlen((char *)s) + 1), sizeof(char));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s, ft_strlen((char *)s));
	return (ret);
}

int main(void)
{
	char	*test = strdup("hello");
	printf("str: %s\n", test);
}