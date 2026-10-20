/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 22:29:26 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/17 02:18:15 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if ((char)c == s[i])
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
/*int main()
{
    char *j = "gf$sd$bfA$kj";
    printf("the func : %s ",ft_strrchr(j,3));
    printf("\nthe real : %s", strrchr(j,3));
    
}*/
