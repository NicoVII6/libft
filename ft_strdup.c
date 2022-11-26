/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:52:28 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 14:59:05 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;
	int		len;

	len = ft_strlen((char *)src);
	dst = (char *) malloc (sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>

int	main()
{
	char	*src = "What's up dude ?!";
	char	*dst;

	printf("%s", ft_strdup(src));

	return (0);
}*/