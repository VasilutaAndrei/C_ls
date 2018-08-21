#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
		return (list);
	}
	list->content = malloc(content_size + 1);
	ft_memcpy(list->content, (void*)content, content_size);
	list->content_size = content_size;
	return (list);
}
