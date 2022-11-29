/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:17:22 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/24 18:56:38 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction memset remplit les len premiers octects de la zone mémoire pointée par s 
avec l'octet c 
Elle renvoie un pointeur sur la zone mémoire pointée par b */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

int	main()
{
	char	str[35] = "BAGD  TDGES";

	printf("Before memset = %s\n", str);

	ft_memset(str + 2, 'x', 5);

	printf("After memset = %s\n", str);

	return (0);
}*/

/*
The derefencing the pointer of the type void *ptr 
yields an object of the incomplete type void.
So the compiler will issue an error. 
So the pointer of the type void * is cast to the pointer type
unsigned char *
*/