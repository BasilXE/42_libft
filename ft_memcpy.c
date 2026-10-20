/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:16:15 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/27 15:09:40 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char		*s;
	unsigned char			*d;

	s = src;
	d = dest;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char *dest;
	char src[] = "hi basil ere";
	size_t m = 8;
	memcpy(dest,src,m);
	printf("the dest is : %s", dest);
	ft_memcpy(dest,src,m);
	printf("\nmemcpy the dest is : %s", dest);
}*/
