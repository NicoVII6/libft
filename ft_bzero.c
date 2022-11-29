/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:28:15 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 13:39:34 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction supprime les données des len octets de mémoire en partant de la localisation pointée par s
et en écrivant le caractère NULL */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	char	str[35] = "BAGD  TDGES";

	printf("Before bzero = %s\n", str);

	ft_bzero(str, 11);

	printf("After bzero = %s\n", str);

	return (0);
}
*/