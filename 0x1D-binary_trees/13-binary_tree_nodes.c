#include "binary_trees.h"

/**
*binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
*@tree: pointer to the root node of the tree
*Return: count
**/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	}
	else
	{
		return (0);
	}
	return (count);
}
