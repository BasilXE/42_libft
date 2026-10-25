/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 14:52:42 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/19 17:49:08 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**checker(char **split, size_t i, size_t len)
{
	split[i] = malloc (len + 1);
	if (!split[i])
	{
		while (i > 0)
		{
			i--;
			free(split[i]);
		}
		free(split);
		return (NULL);
	}
	return (split);
}

static int	lenofword(char const *s, char c, char **split)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			while (s[i] && s[i] != c)
			{
				len++;
				i++;
			}
			if (checker(split, j, len) == NULL)
				return (0);
			j++;
		}
		if (s[i])
			i++;
	}
	split[j] = NULL;
	return (1);
}

static char	**coopy(size_t i, char const *s, char c, char **split)
{
	size_t	j;
	size_t	t;

	j = 0;
	while (s[i])
	{
		t = 0;
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			while (s[i] && s[i] != c)
			{
				split[j][t] = s[i];
				i++;
				t++;
			}
			split[j][t] = '\0';
			if (t > 0)
			{
				j++;
				continue ;
			}
		}
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (counter(s, c) + 1));
	if (!split)
		return (NULL);
	if (!lenofword(s, c, split))
		return (NULL);
	split = coopy(0, s, c, split);
	return (split);
}
/*int	main()
{
	char		l = ' ';
	const char	*sp = " ";
	char		**new;

	new = ft_split(sp, l);
	int	i = 0;
	printf("the :::%s",new[i]);
	while (new[i])
	{
		printf("the :%s\n", new[i]);
		i++;
	}
}*/
