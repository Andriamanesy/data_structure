#include "../include/header_list.h"

t_list	*create_node(void *data)
{
	if (!data)
		return NULL;
	t_list *node;

	node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return node;
}

void	print_int(void *data)
{
	printf("%d", *(int *)data);
}

void	print_list(t_list *head, void (*f)(void *))
{
	while (head)
	{
		f(head->data);
		printf(" --> ");
		head = head->next;
	}
	printf("NULL \n");
}
