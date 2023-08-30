#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL, otherwise height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
/** checks if the tree pointer is NULL and returns 0 if so, as the height of an empty tree is 0*/
	if (tree == NULL)
		return 0;

/** calculates the height of the left subtree by recursively calling binary_tree_height on the left child of the current node*/
	size_t left_height = binary_tree_height(tree->left);
/** calculates the height of the right subtree by recursively calling binary_tree_height on the right child of the current node*/
	size_t right-height = binary_tree_height(tree->right);
/** height isdetermined by adding 1 to the maximum height between the left and right subtrees*/
	return (left_height > right_height) ? (left_height + 1) : (right_height + 1);
}

