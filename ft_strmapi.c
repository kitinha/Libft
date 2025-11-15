/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:53:03 by codespace         #+#    #+#             */
/*   Updated: 2025/11/15 17:53:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char(*f)(unsigned int, char))
{
    char            *ns;
    unsigned int    i;

    i = 0;
    ns = malloc(ft_strlen(s) * sizeof(char));
    if (!ns)
        return (NULL);
    while (i <= ft_strlen(s))
    {
        ns[i] = f(unsigned int, char);
        i++;
    }
    return (ns);
}