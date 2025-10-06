#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft_bonus.h"

// Función auxiliar para imprimir una lista
void	print_list(t_list *lst)
{
	int i = 0;
	while (lst)
	{
		printf("Node %d: %s\n", i, (char *)lst->content);
		lst = lst->next;
		i++;
	}
}

// Función auxiliar para duplicar un string
void	*dup_content(void *content)
{
	return strdup((char *)content);
}

// Función auxiliar para liberar un string
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	printf("==== TEST ft_lstnew ====\n");
	t_list *n1 = ft_lstnew(strdup("first"));
	t_list *n2 = ft_lstnew(strdup("second"));
	if (n1 && n1->content)
		printf("Node 1 content: %s\n", (char *)n1->content);
	if (n2 && n2->content)
		printf("Node 2 content: %s\n", (char *)n2->content);

	printf("\n==== TEST ft_lstadd_front ====\n");
	t_list *head = n2;
	ft_lstadd_front(&head, n1);
	print_list(head);

	printf("\n==== TEST ft_lstsize ====\n");
	printf("List size: %d\n", ft_lstsize(head)); // Expected: 2

	printf("\n==== TEST ft_lstlast ====\n");
	t_list *last = ft_lstlast(head);
	printf("Last node content: %s\n", (char *)last->content); // Expected: second

	printf("\n==== TEST ft_lstadd_back ====\n");
	t_list *n3 = ft_lstnew(strdup("third"));
	ft_lstadd_back(&head, n3);
	print_list(head); // Expected: first -> second -> third

	printf("\n==== TEST ft_lstdelone ====\n");
	t_list *to_del = ft_lstnew(strdup("to delete"));
	printf("Before delone: %s\n", (char *)to_del->content);
	ft_lstdelone(to_del, del_content); // Should free the content
	printf("Deleted one node (no output if correct)\n");

	printf("\n==== TEST ft_lstclear ====\n");
	t_list *to_clear = NULL;
	ft_lstadd_back(&to_clear, ft_lstnew(strdup("one")));
	ft_lstadd_back(&to_clear, ft_lstnew(strdup("two")));
	ft_lstadd_back(&to_clear, ft_lstnew(strdup("three")));
	printf("Before clear:\n");
	print_list(to_clear);
	ft_lstclear(&to_clear, del_content);
	printf("After clear: %p\n", (void *)to_clear); // Should be NULL

	printf("\n==== TEST ft_lstmap ====\n");
	t_list *original = NULL;
	ft_lstadd_back(&original, ft_lstnew(strdup("a")));
	ft_lstadd_back(&original, ft_lstnew(strdup("b")));
	ft_lstadd_back(&original, ft_lstnew(strdup("c")));

	t_list *mapped = ft_lstmap(original, dup_content, del_content);
	printf("Original list:\n");
	print_list(original);
	printf("Mapped (duplicated) list:\n");
	print_list(mapped);

	ft_lstclear(&original, del_content);
	ft_lstclear(&mapped, del_content);
	ft_lstclear(&head, del_content); // limpiar lista principal también

	return 0;
}
