/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 17:09:58 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/12 02:38:28 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return ('\0');
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main()
{
    t_list *n1 = ft_lstnew("66");
    t_list *n2 = ft_lstnew("55");
    t_list *n3 = ft_lstnew("44");
    
    if (!n1 || !n2 || !n3)
        return (1);
    n1->next = n2;
    n2->next = n3;
    printf("%d",ft_lstsize(n1));
    
}*/
