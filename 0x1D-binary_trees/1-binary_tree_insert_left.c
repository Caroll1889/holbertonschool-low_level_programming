#include "binary_trees.h"

/**
* *binary_tree_insert_left - inserts a node as the left-child
*@parent: pointer to the node to insert the left child in
*@value: value to put in the new node
*Return: n_node
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = n_node;
		n_node->left = temp;
		temp->parent = n_node;
	}
	else
	{
		parent->left = n_node;
	}
	return (n_node);
}
