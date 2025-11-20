/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:28:26 by ineguill          #+#    #+#             */
/*   Updated: 2025/11/20 18:17:23 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*number;
	int			len;
	long int	nbr;

	nbr = n;
	len = countnum(n);
	number = malloc((len + 1) * sizeof(char));
	if (!number)
		return (NULL);
	if (nbr < 0)
	{
		number[0] = '-';
		nbr *= -1;
	}
	while (len >= 0 && number[len] != '-')
	{
		number[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	number[len] = '\0';
	return (number);
}

// int main(void)
// {
//     printf("%s\n", ft_itoa(12345));
//     printf("%s\n", ft_itoa(-12345));
//     printf("%s\n", ft_itoa(0));
//     printf("%s\n", ft_itoa(-2147483648));
//     printf("%s\n", ft_itoa(2147483647));
//     return (0);
// }