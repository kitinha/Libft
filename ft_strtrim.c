/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:28:26 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/11 21:21:08 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end;
	int		len;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	ret = malloc(len + 1);
	memcpy(ret, s1 + start, len);
	ret[len] = '\0';
	return (ret);
}

/* int    main(void)
{
    char s1[] = "@@@hello@world@@";
    char *ret = ft_strtrim(s1, "@");
    printf("%s", ret);
    free (ret);
    return (0);
} */