/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:39:06 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/13 13:39:06 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *toper(void *v)
{
    char    *src;
    char    *dst;
    int     i;

    src = (char *)v;
    dst = malloc(ft_strlen(src) + 1);
    if (!dst)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dst[i] = ft_toupper(src[i]);
        i++;
    }
    dst[i] = '\0';
    return ((void *)dst);
}

void dele(void *v)
{
    free (v);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	if (!lst || !f || ! del)
		return (NULL);
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst ->next;
	}
	return (new);
}
/*int main()
{
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *c;
    
    n1 = ft_lstnew("zaId");
    n2 = ft_lstnew("farEs");
    n3 = ft_lstnew("BAsil");
    
   
    if (!n1 || !n2 || !n3)
        return (1);
    n1->next = n2;
    n2->next = n3;
    c = ft_lstmap(n1,toper,dele);
    while (c)
    {
        printf("the node : %s\n", (char *)c->content);
        c = c->next;
    }
}*/
