#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;
	t_list	*lst_next;

	if (!lst || !*lst || !del)
		return ;
	last = *lst;
	while (last)
	{
		lst_next = last->next;
		ft_lstdelone(last, del);
		last = lst_next;
	}
	*lst = NULL;
}