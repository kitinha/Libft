/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:52:35 by codespace         #+#    #+#             */
/*   Updated: 2025/11/18 16:49:27 by ineguill         ###   ########.fr       */
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
	int		i;
	int		len;
	int		j;
	char	*word;

	len = 0;
	i = 0;
	j = 0;
	while (s[len + i] && s[len + i] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (j < len)
	{
		word[j] = s[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

static void	ft_free(char **s)
{
	int	i;

	i = 0;
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
	ns = malloc(words + 1 * sizeof (char *));
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
	}
	return (ns);
}

// "  Hello world I am Ines"
// Hello
// world
// I
// am
// Ines
// '\0'
/*int	main(void)
{
	char	*s = ",,Hello, World, How areyou,,";
	char c = ',';
	char **result = ft_split(s, c);
	int	i = 0;
	while (result[i])
	{
		printf("%s", result[i]);
		i++;
	}
	free (result);
	return (0);
}*/
