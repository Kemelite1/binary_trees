#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size of.
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	size_t left_size = binary_tree(tree->left);
	size_t right_size = binary_tree(tree->right);

	return left_size + right_size + 1;
/** total size of the tree is the sum of the sizes of the left and right subtrees, plus 1 for the current node*/
}
