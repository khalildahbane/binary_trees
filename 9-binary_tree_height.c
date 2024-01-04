#include "binary_trees.h"
/**
 * binary_tree_height -  creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        if (!tree)
        {
            return (0);
        }
        size_t left = binary_tree_height(tree->left);
        size_t right = binary_tree_height(tree->right);

        return (left > right) ? left + 1 : right + 1;
}
