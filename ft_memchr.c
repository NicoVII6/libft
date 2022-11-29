/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:23:19 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/01 12:05:31 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction examine les n premiers octets de la zone mémoire pointée par s, 
à la recherche de la première occurence de c 
c et la zone mémoire pointée par s sont interprétées comme des unsigned char */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr_s;
	unsigned char	ptr_c;

	ptr_s = (unsigned char *)s;
	ptr_c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (*ptr_s == ptr_c)
			return (ptr_s);
		ptr_s++;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	*str = "Quelle heure est t-il ??";
	char	c = 'r';
	size_t	len = 12;

	printf("%s", ft_memchr(str, c, len));
	return (0);
}*/