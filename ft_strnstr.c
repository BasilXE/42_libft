/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 00:59:38 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/25 19:46:22 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	h;
	size_t	j;

	i = 0;
	j = ft_strlen(little);
	if (j == 0 || little == big)
		return ((char *)big);
	while (big[i] != '\0' && len > i)
	{
		h = 0;
		while (len > i + h && big[i + h] == little[h] && little[h])
			h++;
		if (little[h] == '\0')
			return ((char *)(big + (i)));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char *r = "12345";
	char *t = "12345";
    	int n = 4;
	//tfindlen(t);
//	printf("the real : %d", strnstr(r,t,n));
    	printf("\nthe func : %s\n", ft_strnstr(r,t,n));
}
*/
