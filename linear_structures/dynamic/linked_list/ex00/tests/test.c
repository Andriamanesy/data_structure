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

int main(void)
{
	printf("Staring Linked List TDD... \n");
	test_node_creation();

	printf(" All tests passed successfully!\n");
	return (0);
}
