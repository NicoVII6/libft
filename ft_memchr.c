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

#include "libft.h"
/*
void	*ft_memchr(const void *s, int c, size_t len)
{
	void	*ptr;
	void	*str;
	size_t	i;

	ptr = NULL;
	str = (unsigned char	*)s;
	i = 0;
	while (i < len && (*((unsigned char *)((unsigned char * )str + i)) != '\0'))
	{
		if(*(unsigned char *)((unsigned char *)str + i) == c)
		{
			ptr = ((unsigned char *) str + i);
			break;	
		}
		i++;
	}
	return (ptr);
}*/

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