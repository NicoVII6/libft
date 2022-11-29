/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:50:56 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 15:43:56 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction memmove copie len octets de la zone mémoire src vers la zone mémoire dst
les deux zones peuvent se chevaucher */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	if (ptr2 < ptr)
		while (i++ < len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
/*
#include <stdio.h>

int	main()
{
	char	dst[30] = "coucou";
	char	src[25] = "Hello everyone !!";

	ft_memmove(dst, src, 3);
	printf("%s", dst);

	return (0);
}*/