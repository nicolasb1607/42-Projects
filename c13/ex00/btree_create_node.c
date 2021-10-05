#include "ft_btree.h"

t_btree *btree_create_node(void * item)
{
    t_btree *newNode;

    newNode = malloc(sizeof(t_btree));
    if (!newNode)
        return (NULL);
    newNode->item = item;
    newNode->left = NULL; 
    newNode->right = NULL;
    return(newNode);
}