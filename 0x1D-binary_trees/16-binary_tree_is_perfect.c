#include "binary_trees.h"

/**
*binary_tree_is_leaf - checks if a node is a leaf
*@node: pointer to the node to check
*Return: 0 or 1
**/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
*binary_tree_height - measures the height of a binary tree
*@tree: pointer to the root node of the tree to measure the height.
*Return: h or 0
**/

size_t binary_tree_height(const binary_tree_t *tree)
{

	int left;
	int right;
	int h;

	if (tree == NULL || binary_tree_is_leaf(tree))
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
	{
		h = 1 + left;
	}
	else
	{
		h = 1 + right;
	}
	return (h);
}

/**
*binary_tree_is_perfect - checks if a binary tree is perfect
*@tree: pointer to the root node of the tree to check
*Return: 1 o 0
**/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	if (tree->right == NULL || tree->left == NULL)
	{
		return (0);
	}
	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		if (binary_tree_is_perfect(tree->right) &&
binary_tree_is_perfect(tree->left))
		{
			return (1);
		}
	}
	return (0);
}
