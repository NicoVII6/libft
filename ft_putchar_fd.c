/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:50:53 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/22 16:24:53 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* écris le caractère c sur le descripteur fd donné */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	char	c = 'g';
	int	fd = 1;

	ft_putchar_fd(c, fd);
	return (0);
}*/