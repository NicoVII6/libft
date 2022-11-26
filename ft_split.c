/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:09:22 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/26 16:00:10 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue memoire et retourne un tableau de strings obtenu en separant
la string s, a l'aide de la valeur de c (par ex les whitespace), 
utilise comme delimiteur, le tableau doit etre termine par \0 */

#include "libft.h"
#include <stdlib.h>

/* a static extends the lifetime of a variable defined between 
a '{}' pair to the execution period of the whole program */

static int	count_words(const char *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s != c)
				s++;
		}
		else
			s++;
	}
	return (words);
}

static char	**free_all(char **arr)
{
	while (*arr)
		free(*arr);
	free(arr);
	return(NULL);
}

static char	**word_size(const char *s, char c, int words_nb)
{
	int	size;
	int	j;
	char	**arr;
	int	str_len;

	arr = malloc(sizeof(char *) * (words_nb + 1));
	j = - 1;
	size = 0;
	while (*s)
	{
		if (*s != c)
		{
			j++;
			s++;
			size++;
			while (*s != c && *s)
			{
				size++;
				s++;
			}
			arr[j] = malloc(sizeof(char) * (size + 1));
			ft_strlen(*arr) += size;
			size = 0;
		}
		else
			s++;
	}
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	char	*str;
	int		words_nb;
	int		i;
	int		str_len;

	words_nb = count_words(s, c);
	/*arr = malloc(sizeof(char *) * (words_nb + 1));*/
	arr = word_size(s, c, words_nb);
	if (!arr)
		return (NULL);
	str = (char *)s;
	i = 0;
	str_len = 0;
	while (i < words_nb)
	{
		/*arr[i] = malloc(sizeof(char) * ();*/
		if (arr[i] == NULL)
			return (free_all(arr));
		ft_strlcpy(arr[i], str, str_len);
		i++;
	}
	return (arr);
}
