#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using pre-order traversal.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
/** checks if either the tree pointer or the func pointer is NULL and returns immediately if either is NULL*/
	if (tree == NULL || func == NULL)
		return;

/** recursively performs post-order traversal on the left subtree*/
	binary_tree_postorder(tree->left, func);
/** then recursively performs post-order traversal on the right subtree*/
	binary_tree_postorder(tree->right, func);
/** Finally, it calls the provided function func with the value of the current node*/
	func(tree->n);
}
