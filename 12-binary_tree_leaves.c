#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count leaves.
 *
 * Return: Number of leaves in the tree, or 0 if @tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
        if (!tree)
        {
            return (0);
        }
        if (!tree->right && !tree->left)
        {
            return (1);
        }

        size_t left = binary_tree_leaves(!tree->left);
        size_t right = binary_tree_leaves(!tree->right);

            return (right + left);
}
