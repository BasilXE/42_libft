/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 00:04:16 by basayoub          #+#    #+#             */
/*   Updated: 2026/09/28 00:46:55 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int						i;
	unsigned char			*c1;
	unsigned char			*c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	i = 0;
	while (n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
		n--;
	}
	return (0);
}
/*int main()
{
	int i = 5;
	char s[] = {'y','u','o','e','r','d'};
	char ss[] = {'y','u','o','i','r','d'};
	printf("the real : %d", memcmp(s,ss,i));
	printf("\nthe func : %d", ft_memcmp(s,ss,i));
}*/
