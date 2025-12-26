#include "../include/header_list.h"
#include <assert.h>


void	test_node_creation()
{
	int val = 42;

	t_list *node = create_node(&val);

	assert(node != NULL);
	assert(node->data == &val);
	assert(node->next == NULL);
	printf("Test Node Creation: Passed\n");
}
void	test_add_front()
{
	t_list *head;
	int val1 = 42;
	int val2 = 50;
	head = create_node(&val1);
	
	assert(head != NULL);
	add_front(&head, &val2);
	assert(*(int *)(head->data) == 50);
	assert(head->next != NULL);
	assert(*(int *)(head->next->data) == 42);
	assert(head->next->next == NULL);
}

void	test_add_back()
{
	int val1 = 42;
	int val2 = 50;
	t_list *head = create_node(&val1);
	assert(head != NULL);
	add_back(&head, &val2);
	assert(*(int *)(head->next->data) == 50);
	assert(head->next != NULL);
	assert(head->next->next == NULL);
}

int main(void)
{
	printf("Staring Linked List TDD... \n");
	test_node_creation();
	test_add_front();
	test_add_back();
	printf(" All tests passed successfully!\n");
	return (0);
}
