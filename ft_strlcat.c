/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:10:50 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 13:39:11 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* concatene à la fin de la string dst la string src sur size caractères de long */

#include "libft.h"

/* 2e if, on peut copier l'intagralite de la string src ds dst sinon copie partielle */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (ft_strlen(dst) < size)
		dst_len = ft_strlen(dst);
	else
		return (size + src_len);
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	if (src_len < size - dst_len)
	{
		while (src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	else
	{
		while (j < (size - dst_len - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	dst[i + j] = '\0';
	return (i + src_len);
}
/*
#include <stdio.h>

int	main()
{
	char	dst[500] = "hello ";
	char	src[500] = "bien ou bien ?";
	size_t	size = 8;

	printf("%zu\n", ft_strlcat(dst, src, size));

	return (0);
}*/