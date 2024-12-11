#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: NULL, the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t uncle;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->right == node)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (node->parent->parent->right);
	}
}
