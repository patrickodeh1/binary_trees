#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child
 * @parent: pointer to the parent node
 * @value: value for the new node
 * Return: pointer to new node or NULL at failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;


	return (newNode);
}
