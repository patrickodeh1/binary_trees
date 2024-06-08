#include "binary_trees.h"

/**
 * binary_tree_is_root - checks is a node is a root node
 * @node: node to check
 * Return: 1 if node 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return 0;
	return (node->parent == NULL) ? 1 : 0;
}
