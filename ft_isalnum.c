/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:37:28 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/20 13:48:00 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0') || (c <= 'Z' && c >= 'A')
		|| (c <= 'z' && c >= 'a'))
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>

int	main()
{
	int	c = '*';

	printf("%d", ft_isalnum(c));
	return (0);
}*/