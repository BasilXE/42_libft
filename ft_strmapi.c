/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 23:15:06 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/05 23:15:06 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char    ft_up(unsigned int n, char c)
{
	n = n+1;
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
char	ft_low(unsigned int n, char c)
{
	n = n +1;
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!f || !s)
		return (NULL);
	str = malloc (ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f (i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int	main()
{
	char	*h = "ab6514cGGtK";
	printf("up func : %s", ft_strmapi(h,ft_up));
	printf("\nlow func : %s\n", ft_strmapi(h,ft_low));
}*/
