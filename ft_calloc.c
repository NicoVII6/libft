/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:19:11 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 16:15:03 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (!rtn || !size)
		return (rtn);
	ft_memset(rtn, '\0', count * size);
	return (rtn);
}
/*
#include <stdio.h>

int	main()
{
	size_t	len = 8539;

	printf("%s\n", ft_calloc(len, sizeof(char)));
	printf("%s\n", calloc(len, sizeof(char)));
	return (0);
}*/