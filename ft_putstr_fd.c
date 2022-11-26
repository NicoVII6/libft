/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:21:23 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/03 14:01:34 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
/*
int	main()
{
	char	*s = "Hello what's up ?@";
	int		fd = 1;

	ft_putstr_fd(s, fd);
	return (0);
}*/