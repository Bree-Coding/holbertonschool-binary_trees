#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0,
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (left == 1 && right == 1)
	{
		return (1);
	}
	return (0);
}
