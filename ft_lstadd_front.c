/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 13:59:33 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/11 17:47:26 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *curr;
    
    n1 = ft_lstnew("zaid");
    n2 = ft_lstnew("40");
    n3 = ft_lstnew("basil");
    
   
    if (!n1 || !n2 || !n3)
        return (1);
    n1->next = n2;
    ft_lstadd_front(&n1,n3);
    curr = n1;
      //int i = 1;
    while (curr)
    {
        printf("the node(): %s\n",(char *)curr->content);
        curr = curr-> next;
    } 
    
}*/
