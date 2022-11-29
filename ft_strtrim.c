/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:40:07 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/24 18:56:25 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction alloue et retourne une copie de la chaine de caractères s1 trimmée, 
c'est à dire sans les caractères de set originalement présents au début et à la fin de s1 */

#include "libft.h"
#include <stdlib.h>

unsigned int	is_in_set(char c, const char *set);
static char	*make_str(const char *s1, size_t start, size_t len);

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	
	if (!set)
		return (ft_calloc(1, 1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[start], set) == 1)
		start++;
	while (is_in_set(s1[end], set) == 1)
		end--;
	return (make_str(s1, start, end - start + 1));
}

static char	*make_str(const char *s1, size_t start, size_t len)
{
	char	*trim;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	trim = ft_calloc((len + 1), sizeof(char));
	if (!trim)
		return (NULL);
		i = 0;
	while (i < len)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

unsigned int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}