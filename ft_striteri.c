/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 00:14:45 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/06 00:14:45 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_up(unsigned int n, char *c)
{
    (void)n;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

void ft_low(unsigned int n, char *c)
{
    (void)n;
    if (*c >= 'A' && *c <= 'Z')
        *c = *c + 32;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*int main(void)
{
    char str1[] = "ab6514cGGtK";
    char str2[] = "ab6514cGGtK";

    printf("Before: %s\n", str1);

    ft_striteri(str1, ft_up);
    printf("UP:     %s\n", str1);

    ft_striteri(str2, ft_low);
    printf("LOW:    %s\n", str2);

    return (0);
}*/
