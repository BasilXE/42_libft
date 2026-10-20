/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 00:59:38 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/18 00:42:36 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	h;
	int		j;

	i = 0;
	h = 0;
	j = ft_strlen(little);
	if (j == 0 || little == big)
		return ((char *)big);
	while (big[i] != '\0' && len > i)
	{
		while (big[i + h] == little[h] && (len > (i + h)) && little[h])
		{
			h++;
		}
		if (little[h] == '\0')
			return ((char *)(big + (i)));
		h = 0;
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char *r = "aaabcabcd";
	char *t = "aabc";
    	int n = 9;
	//tfindlen(t);
//	printf("the real : %s", strnstr(r,t,n));
    	printf("\nthe func : %s\n", ft_strnstr(r,t,n));
}*/
