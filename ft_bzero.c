/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:35:50 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/20 02:02:38 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*p;
	size_t				i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*#include <string.h>
int	main()
{
	char	y[] = "123456789hi every onnneeeee";
	ft_bzero(y,5);
	for(size_t i = 0 ; i < sizeof(y); i++)
	{
		printf("\nthe ascii = %d ", y[i]);
	}
	
}*/
