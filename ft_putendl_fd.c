/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:27:44 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/20 16:37:06 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ecrit la string s sur le descripteur fd donné et suivi d'un retour à la ligne */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
/*
int	main()
{
	char	*s = "Hello what's up ?@";
	int		fd = 1;

	ft_putendl_fd(s, fd);
	ft_putendl_fd(s, fd);
	return (0);
}*/