#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root.
 * @node:pointer to the node to check.
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
/** checks if the node pointer is NULL and returns 0 if so, as a NULL node cannot be a root */
	if (node == NULL)
		return 0;

/** checks if node has a NULL parent. If so, it's a root node and the function returns 1*/
	return (node->parent == NULL);
}
