#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks is a node is a leaf node
 * @node: node to check
 * Return: 1 if node 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}