#include "binary_trees.h"
/**
 * binary_tree_insert_left -  creates a binary tree node.
 *
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}


	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent-> NULL;
	newnode->right = NULL;

	binary_tree_t *temp = parent->left;
	if (temp != NULL)
	{
		newnode->left = temp;
		temp->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
