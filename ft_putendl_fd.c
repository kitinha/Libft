/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineguill <ineguill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:06:57 by codespace         #+#    #+#             */
/*   Updated: 2025/11/18 19:42:27 by ineguill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

// int main(void)
// {
//     int fd;
//     fd = open("O_meu_ficheiro", O_RDWR | O_CREAT | O_APPEND);
//     ft_putendl_fd("Hello World", fd);
//     close(fd);
// }