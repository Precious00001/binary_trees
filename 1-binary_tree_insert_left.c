#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert in the left child of tree
 * @parent: tree node
 * @value: value to insert
 * Return: new node or NULL on fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	node->left = parent->left;
	if (node->left != NULL)
	{
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}
