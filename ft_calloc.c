/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:38:37 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/18 01:47:15 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	ft_bzero(m, size * nmemb);
	return (m);
}
/*int main()
{
    char    *ptr = ft_calloc(0,0);
    char *ptt = calloc(0,0);
    printf("the real : %p", (void *)ptt);
    printf("\nthe func : %p\n", (void *)ptr);
    free(ptt);
    free(ptr);
}*/
