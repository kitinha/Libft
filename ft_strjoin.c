/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:36:20 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/25 17:41:13 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	ret = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!ret)
		return (NULL);
	while (s1[i])
	{
		ft_memcpy(ret, s1, ft_strlen(s1));
		i++;
	}
	while (s2[j])
	{
		ft_memcpy(ret + i, s2, ft_strlen(s2));
		j++;
	}
	ret[i + j] = '\0';
	return (ret);
}

/* int	main(void)
{
	char s1[] = "Hello, ";
	char s2[] = "how are you darling?";
	char *ret = ft_strjoin(s1, s2);
	printf("%s", ret);
	free(ret);
	return (0);
} */