/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:27:05 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/20 18:44:58 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	if (!s)
		return (NULL);
	ret = malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (i == start)
			ft_memcpy(ret, );
		i++;
	}
	return (ret);
}

/* int	main(void)
{
	char s[] = "Hello how are you my darling?";
	char *ret = ft_substr(s, 18, 20);
	printf ("%s", ret);
	free (ret);
	return (0);
} */