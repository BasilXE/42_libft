/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:54:36 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/25 20:04:20 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	m;

	m = 0;
	i = 0;
	j = 0;
	while (i < size && dst[i] != '\0')
		i++;
	while (src[j] != '\0' && size > (j + i + 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	while (src[m] != '\0')
		m++;
	if (i == size)
		return (size + m);
	return (i + m);
}
/*#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	d[20] = "lklk";
	char	d1[] = "klkl";
	char	s[] = "jhjh";
	int	k = 6;
	printf("%u\n",ft_strlcat(d,s,k));
	printf("%s\n",d);
	printf("%zu\n",strlcat(d1,s,k));	
}*/
