#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node~
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node~
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Function to print a binary tree */
void binary_tree_print(const binary_tree_t *);

/* Function to create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Function to insert a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Function to insert a node as the right-child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

#endif /* _BINARY_TREES_H_ */
