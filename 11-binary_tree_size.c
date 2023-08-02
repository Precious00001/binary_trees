#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t left_h, right_h;

		left_h = binary_tree_size(tree->left);
		right_h = binary_tree_size(tree->right);
		return (1 + left_h + right_h);
	}
} 
