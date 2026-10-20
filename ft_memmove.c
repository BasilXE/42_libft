/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:01:32 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/19 13:52:27 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*memo(unsigned char *d, unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		while (n > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s;
	unsigned char		*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest == src || n == 0)
		return (dest);
	d = memo(d, s, n);
	return (dest);
}
/*#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char real1[] = "abcdef";
    char mine1[] = "abcdef";
    char real2[] = "ABCDE";
    char mine2[] = "ABCDE";

    memmove(real1, "XYZ", 3);
    ft_memmove(mine1, "XYZ", 3);
    printf("Test 1: real = %s | mine = %s\n", real1, mine1);
    memmove(real2 + 1, real2, 4);
    ft_memmove(mine2 + 1, mine2, 4);
    printf("Test 2: real = %s | mine = %s\n", real2, mine2);

    return (0);
}*/
