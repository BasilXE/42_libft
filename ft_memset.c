/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:03:19 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/20 02:01:28 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (p);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
    char k[] = "hiii every one here or not here ";
    //k = "hiii every one here or not here ";
   // memset(k,'-',6);
  //  printf("the real : %s", k);
    ft_memset(k,'*', 6);
    printf("\nthe function : %s",k);
}*/
