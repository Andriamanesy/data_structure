#include "../include/header_list.h"

t_list	*create_node(void *data)
{
	if (!data)
		return NULL;
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return NULL;
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
void	add_front(t_list **head, void *data)
{
	if(!head)
		return ;
	t_list *new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}
void add_back(t_list **head, void *data)
{
	if(!head)
		return ;
	t_list *new_node = malloc(sizeof(t_list));
	if(!new_node)
		return ;
	new_node->data = data;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return ;		
	}
	t_list *tmp = *head;

	while(tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
}
