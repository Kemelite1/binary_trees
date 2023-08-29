#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node.
 * @parent: Pointer to node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: pointer to the new node, NULL on failure or if parent is NULL.
 * Description: if parent already has a left-child, 
 * 		the new node takes its place and the old
 * 		left-child is set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return NULL;

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return NULL;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return newnode;
}
