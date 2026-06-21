#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*pointer;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		pointer = ft_lstnew(f(lst->content));
		if (!pointer)
			ft_lstclear(&head, del);
		ft_lstadd_back(&head, pointer);
		lst = lst->next;
	}
	return (head);
}