/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:28:26 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/02 18:07:40 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int countnum(int n)
{
    int count;
    int absn;

    absn = -n;
    count = 0;
    if (n == '0')
        return(1);
    if (n < 0)
    {
        n = absn;
        count++;
    }
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    char const    *number;

    if (n == INT_MIN)
        return (INT_MIN) // deal with intmin
    if (n == '0')
    {
        number = "0";
        number[1] = '\0';
        return (number);
    }
    if (n < 0)
        // convert to positive
    number = malloc(countnum(n) + 1);
    // extract digits from right to left (turn into char)
    number[countnum(n)] = '\0';
    return (number);
}