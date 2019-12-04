#include "binary_trees.h"

/**
*binary_tree_leaves - counts the leaves in a binary tree
*@tree: pointer to the root node of the tree
*Return: count
**/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	count = right + left;

	return (count);
}
