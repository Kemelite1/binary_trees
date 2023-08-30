#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using in-order traversal.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
/** checks if either the tree pointer or the func pointer is NULL, and returns immediately if either is NULL*/
	if (tree == NULL || func == NULL)
		return;

/** recursively performs in-order traversal on the left subtree*/
	binary_tree_inorder(tree->left, func);

/** calls the provided function func with the value of the current node*/
	func(tree->n);
/** recursively performs in-order traversal on the right subtree*/
	binary_tree_inorder(tree->right, func);
}
