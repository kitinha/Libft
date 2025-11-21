/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:52:35 by codespace         #+#    #+#             */
/*   Updated: 2025/11/21 18:53:13 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*fillwords(const char *s, char c)
{
	int		len;
	int		j;
	char	*word;

	len = 0;
	j = 0;
	while (s[len] && s[len] != c)
		len++;
	word = ft_calloc(len + 1, sizeof(char));
	if (!word)
		return (NULL);
	while (j < len)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	ft_free(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(const char *s, char c)
{
	char	**ns;
	int		i;
	int		j;
	int		words;

	j = 0;
	i = 0;
	words = countwords(s, c);
	ns = ft_calloc(words + 1, sizeof(char *));
	if (!ns)
		return (NULL);
	while (i < words)
	{
		while (s[j] == c)
			j++;
		ns[i] = fillwords(&s[j], c);
		if (!ns[i])
		{
			ft_free(ns);
			return (NULL);
		}
		j += ft_strlen(ns[i]);
		i++;
	}
	return (ns);
}

// int	main(void)
// {
// 	char	s[] = "elit. Sed non risus. Suspendisse";
// 	char c = ' ';
// 	char **result = ft_split(s, c);
// 	int	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	ft_free (result);
// 	return (0);
// }