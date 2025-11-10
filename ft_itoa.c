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
    int           len;
    int           i;
    long          nbr;
    
    nbr = n;
    i = 0;
    len = countnum(n);
    number = malloc((len + 1) * sizeof(char));
    if (!number)
        return (NULL);
    if (number[0] == '0')
        return (number);
    while (nbr != 0)
    {
        number[i] = ((nbr % 10) + '0');
        nbr = nbr / 10;
        i--;
    }
    // extract digits from right to left (turn into char)
    number[len] = '\0';
    return (number);
}

int main(void);
{
  printf("%s", ft_itoa(12345));
}