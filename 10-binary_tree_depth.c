#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL, otherwise depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
/** If tree is NULL or tree->parent is NULL, the function returns 0*/
/** If tree is not NULL and tree->parent is not NULL, returns 1 + binary_tree_depth(tree->parent)*/
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
