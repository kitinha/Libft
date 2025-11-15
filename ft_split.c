/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:52:35 by codespace         #+#    #+#             */
/*   Updated: 2025/11/15 17:52:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int countwords(char *s, char c)
{
    int    i;
    int    count;

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

char **ft_split(const char *s, char c)
{
	char	**ns;
	int		i;
    int     j;

    j = 0;
	i = 0;
	ns = malloc(countwords(s, c) + 1 * sizeof (char *));
	if (!ns)
		return (NULL);
	while (i < countwords(s, c))
	{
        while (s[j] == c)
            j++;
            ns[i] = fillwords(&s[j], c);
            j += ft_strlen(ns[i]);

	}
	return (ns);
}

static char	*fillwords(char *s, char c)
{
    int     i;
    int     len;
    int     j;
    char    *word;

    len = 0;
    i = 0;
    j = 0;
    while (s[i] == c)
        i++;
    while (s[len + i] && s[len + i] != c)
        len++;
    word = malloc((len + 1) * sizeof(char));
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

int	main(void)
{
	char	*s = ",,Hello, World, How areyou,,";
    char c = ',';
	printf("%", ft_split(s, c));
}
