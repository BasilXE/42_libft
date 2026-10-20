/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 02:00:00 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/18 00:42:46 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char		*str;
	int			i;
	int			s;
	int			n;

	str = (char *)nptr;
	n = 0;
	s = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}
/*#include <stdlib.h>
int main()
{
	char *np = {9, 10, 11, 12, 13, 0};
	char *p = {9, 10, 11, 12, 13, 0};
	printf("the real : %d ", atoi(np));
	printf("\nthe func : %d ", ft_atoi(np));
}*/
