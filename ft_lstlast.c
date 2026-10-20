/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 17:40:24 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/12 02:54:12 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	j;

	if (!lst)
		return (NULL);
	j = 1;
	i = ft_lstsize(lst);
	while (j < i)
	{
		lst = lst->next;
		j++;
	}
	return (lst);
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
    printf("%s\n",(char *)ft_lstlast(n1)->content);
    
}*/
