#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the
 * left-child of another node
 * @parent: a poiter to the parent node
 * @value: value to put in the new node
 * Return: new_node, NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (new_node->left != NULL)
	{
		new_node->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
