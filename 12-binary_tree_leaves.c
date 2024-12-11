#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: 0, the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (left + 1);
	}

	return (0);
}
