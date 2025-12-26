#ifndef HEADER_LIST_H
#define HEADER_LIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	void *data;
	t_list *next;
};

t_list	*create_node(void *data);
void	print_list(t_list *head, void (*f)(void *));
void	add_front(t_list **head, void *data);

#endif
