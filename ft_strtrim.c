/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:28:26 by ineguill          #+#    #+#             */
/*   Updated: 2025/10/30 23:14:48 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != set[0])
			break;
		i++;
	}
	printf("%d", i);
	j = ft_strlen(s1);
	while (s1[j])
	{
		if (s1[j] != set[0])
			break;
		j--;
	}
	ret = ft_substr(s1, i, ft_strlen(&s1[i - j]));
	return (ret);
}

int	main(void)
{
	char s1[] = "@@@hello@world@@";
	char *ret = ft_strtrim(s1, "@");
	printf("%s", ret);
}