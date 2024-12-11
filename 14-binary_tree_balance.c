#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the balance factor of a binary
 * tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0, the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		return (left - right);
	}
	else
	{

	}

	return (0);
}
