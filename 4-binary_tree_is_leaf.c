#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node:pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
/** checks if the node pointer is NULL and returns 0 if so, as a NULL node cannot be a leaf*/
	if (node == NULL)
		return 0;
/** checks whether the given node has both its left and right children set to NULL*/

	return (node->left == NULL && node->right == NULL);
}
