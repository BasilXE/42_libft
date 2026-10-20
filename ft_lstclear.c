/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 03:10:20 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/13 03:10:20 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void deleter(void *v)
{
    free(v);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		t = *lst;
		*lst = (*lst)-> next;
		del(t->content);
		free (t);
	}
	*lst = NULL;
}
/*int main(void)
{
    t_list *node1,*node2, *node3,*node4;

    node1 = ft_lstnew(ft_strdup("90"));
    node2 = ft_lstnew(ft_strdup("50"));
    node3 = ft_lstnew(ft_strdup("20"));
    node4 = ft_lstnew(ft_strdup("70"));

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    ft_lstclear(&node3,deleter);

    while (node1 != NULL)
    {
        printf("%s\n", (char *)node1->content);
        node1 = node1->next;
    }

    return (0);
}*/
