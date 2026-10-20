/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 00:25:58 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/19 18:32:41 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*gg(int n, int i, char *str, int k)
{
	int	j;
	int	l;

	while (i > 0)
	{
		j = i;
		l = 1;
		while (j > 1)
		{
			l = l * 10;
			j--;
		}
		str[k] = (n / l) + '0';
		n = n - (str[k] - '0') * l;
		i--;
		k++;
	}
	str[k] = '\0';
	return (str);
}

static char	*ff(int n, int i, char *str, int k)
{
	int	s;
	int	l;

	l = 0;
	if (n < 0)
	{
		n = n * -1;
		l = 1;
	}
	s = n;
	while (s > 0)
	{
		s /= 10;
		i++;
	}
	str = malloc(i + l + 1);
	if (!str)
		return (NULL);
	if (l == 1)
	{
		str[k] = '-';
		k++;
	}
	return (gg(n, i, str, k));
}

char	*ft_itoa(int n)
{
	int		i;
	int		k;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = NULL;
	i = 0;
	k = 0;
	return (ff(n, i, str, k));
}
/*#include <limits.h>
int main()
{
	char *s;
	int num = -2147483648;
	s = ft_itoa(num);
	printf("the func : %s\n",s);
}*/
