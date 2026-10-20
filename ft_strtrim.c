/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:54:32 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/19 14:47:34 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ftstart(const char *s1, const char *set, int i)
{
	int	f;
	int	j;

	while (s1[i] != '\0')
	{
		j = 0;
		f = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				f = 1;
				break ;
			}
			j++;
		}
		if (f == 0)
		{
			break ;
		}
		i++;
	}
	return (i);
}

static int	ftend(const char *s1, const char *set, int i)
{
	int	f;
	int	j;

	i = i - 1;
	f = 0;
	while (i >= 0)
	{
		j = 0;
		f = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				f = 1;
				break ;
			}
			j++;
		}
		if (f == 0)
		{
			break ;
		}
		i--;
	}
	return (i);
}

static char	*iffer(char *str, const char *s1, int i, int e)
{
	int	k;

	k = 0;
	if (i > e)
	{
		str[0] = '\0';
		return (str);
	}
	while (i <= e)
	{
		str[k++] = s1[i++];
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			e;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	i = ftstart (s1, set, 0);
	e = ftend (s1, set, ft_strlen (s1));
	if (i > e)
		str = malloc(1);
	else
		str = malloc (e - i + 2);
	if (!str)
		return (NULL);
	str = iffer(str, s1, i, e);
	return (str);
}
/*int main()
{
	const char *s = "1234561278912";
	const char *st = "1237";
	printf("\nthe one : %s", ft_strtrim(s,st));
}*/
