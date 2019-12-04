#include "binary_trees.h"

/**
*binary_tree_depth - measures the depth of a node in a binary tree
*@tree: pointer to the node to measure the depth
*Return: max or 0
**/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int max = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (1)
	{
		if (tree->parent != NULL)
		{
			tree = tree->parent;
			max++;
		}
		else
		{
			break;
		}
	}
	return (max);
}
