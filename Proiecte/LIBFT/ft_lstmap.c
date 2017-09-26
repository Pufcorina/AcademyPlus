//
// Created by Corina on 13.09.2017.
//

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	new = tmp;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (!tmp->next)
		{
			free(tmp->next);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (new);
}
