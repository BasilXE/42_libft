/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:06:08 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/16 10:25:02 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char l;
    l = 'd';
    printf("the true : %d", isalnum(l));
    printf("\nthe fun : %d", ft_isalnum(l));
}*/
