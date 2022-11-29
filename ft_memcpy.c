/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:56:57 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 13:22:26 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction copie len octets de la zone mémoire src vers la zone mémoire dst
si les zones mémoires se chevauchent, préférer la fonction memmove */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	const unsigned char	*ptr2;
	size_t			i;
	
	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main()
{
	char	dst[30] = "yoyo";
	char	src[25] = "Hello everyone !!";

	ft_memcpy(dst, src, 5);
	printf("%s", dst);

	return (0);
}*/