/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:53:30 by codespace         #+#    #+#             */
/*   Updated: 2025/11/17 17:13:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}