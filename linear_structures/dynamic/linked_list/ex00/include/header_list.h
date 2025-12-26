#ifndef HEADER_LIST_H
#define HEADER_LIST_H
#include <stdio.h>
#include <stdlib.h>
#define RED "\x1B[31m"
#define RED "\x1B[32m"

typedef struct s_list t_list;

struct s_list
{
	void *data;
	t_list *next;
};

t_list	*create_node(void *data);
void	print_list(t_list *head, void (*f)(void *));

#endif
