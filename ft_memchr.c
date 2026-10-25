/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:37:52 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/17 00:19:02 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if ((unsigned char)c == p[i])
		{
			return (p + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
/*int main()
{
    char sr[] = {0, 1, 2 ,3,4,5};
  //  char f = ;
    int sz = 3;
    char *p = memchr(sr,2+256,sz);
    printf("the real : %s", p);
    char *r = ft_memchr(sr,2+256,sz);
    printf("\nthe func : %s\n",r);
}*/
