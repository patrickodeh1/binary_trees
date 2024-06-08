#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right child
 * @parent: pointer to the parent node
 * @value: value for the new node
 * Return: pointer to new node or NULL at failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newNode->right = parent->left;
		parent->right->parent = newNode;
	}
	parent->right = newNode;


	return (newNode);
}
