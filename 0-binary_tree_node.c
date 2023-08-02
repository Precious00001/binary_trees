#include "binary_trees.h"

#include <stddef.h>
/**
 * binary_tree_node - Create a binary tree node
 * @parent: root node of the tree
 * @value: the value in the root note
 * Return: binary tree or NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t  *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
