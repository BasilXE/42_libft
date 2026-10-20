/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 04:38:36 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/13 04:38:36 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void prints(void *p)
{
    printf("the node : %s\n",(char *)p);
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int main()
{
    t_list *n1;
    t_list *n2;
    t_list *n3;
    
    n1 = ft_lstnew("zaId");
    n2 = ft_lstnew("farEs");
    n3 = ft_lstnew("BAsil");
    
   
    if (!n1 || !n2 || !n3)
        return (1);
    n1->next = n2;
    n2->next = n3;
    ft_lstiter(n1,prints);
}*/
