#include "binary_trees.h"

/**
* *binary_tree_insert_right - inserts a node as the right-child
*@parent: pointer to the node to insert the left child in
*@value: value to put in the new node
*Return: n_node
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = n_node;
		n_node->right = temp;
		temp->parent = n_node;
	}
	else
	{
		parent->right = n_node;
	}
	return (n_node);
}
