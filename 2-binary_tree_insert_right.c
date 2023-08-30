#include "binary_trees.h"
/**
 * binary_tree_insert_right - creates a node as a right-child,
 * 				of another node.
 * @parent: Pointer to node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: pointer to the new node, NULL on failure or if parent is NULL.
 * Description: if parent already has a right-child, 
 * 		the new node takes its place and the old
 * 		right-child is set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return NULL;

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return NULL;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return newnode;
}
