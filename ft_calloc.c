/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:45:15 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/21 18:34:30 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > __SIZE_MAX__ / size)
		return (NULL);
	ret = malloc((count * size));
	if (!ret)
		return (NULL);
	ft_bzero(ret, count);
	return (ret);
}

/* int main (int argc, char **argv) {
	char *str;
	int i;
	int size;

	if (argc != 2) 
		return 1;
	size = ft_strlen(argv[1]);
	str = ft_calloc(size, sizeof(char));
	i = 0;
	while (i < size)
		printf("%d", str[i++]);
	printf("\n");
	strncpy(str, argv[1], size);
	i = 0;
	while (i < size)
		printf("%c", str[i++]);
	free(str);
	return 0;
} */