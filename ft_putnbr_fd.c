/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:06:54 by codespace         #+#    #+#             */
/*   Updated: 2025/11/21 17:19:13 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == INT_MIN)
		{
			write (fd, "-2147483648", 11);
			return ;
		}
		write (fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write (fd, &"0123456789"[n % 10], 1);
}

// int main(void)
// {
//     ft_putnbr_fd(-273623, 1);
// }