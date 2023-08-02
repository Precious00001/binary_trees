#include "binary_trees.h"

/**
 * binary_tree_height_1 - measures the hight of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the hight
 */
int binary_tree_height_1(const binary_tree_t *tree)
{
	int l_left, r_right;

	if (tree == NULL)
		return (0);
	l_left = binary_tree_height_1(tree->left);
	r_right = binary_tree_height_1(tree->right);
	if (l_left >= r_right)
		return (l_left + 1);

	return (r_right + 1);

}
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *@tree: pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height_1(tree->left);
	right = binary_tree_height_1(tree->right);
	return (left - right);
}
