#include "binary_trees.h"

/**
*binary_tree_is_leaf - checks if a node is a leaf
*@node: pointer to the node to check
*Return: 0 or 1
**/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
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
*binary_tree_balance - measures the balance factor of a binary tree
*@tree: pointer to the root node of the tree to measure
*Return: bal
**/

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		bal = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		bal -= binary_tree_height(tree->right) + 1;
	}
	return (bal);
}
