#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_left, r_right;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);

	l_left = binary_tree_nodes(tree->left);
	r_right = binary_tree_nodes(tree->right);

	return (r_right + l_left + 1);
}
