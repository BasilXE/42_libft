/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:49:57 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/20 02:27:13 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/*int main()
{
	const char *p = "123456";
	printf(": %d",ft_strlen(p));
}*/