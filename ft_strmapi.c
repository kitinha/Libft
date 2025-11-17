/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:53:03 by codespace         #+#    #+#             */
/*   Updated: 2025/11/17 17:36:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char(*f)(unsigned int, char))
{
    char            *ns;
    int    i;

    i = 0;
    if (!s || !f)
		return (0);
    ns = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!ns)
        return (NULL);
    while (i < ft_strlen(s))
    {
        ns[i] = f(i, s[i]);
        i++;
    }
    ns[i] = '\0';
    return (ns);
}

// int main(void)
// {
// 	const char	*s = "Hello World!";
// 	printf("%s\n", ft_strmapi(s, capitalize));
// 	return (0);
// }