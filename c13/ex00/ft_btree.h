#ifndef FT_BTREE_H
# define FT_BTREE_H

#include <stdlib.h>

typedef struct s_btree
{
    void *item;
    s_btree*left; 
    s_btree *right; 
}   t_btree;

t_btree *btree_create_node(void * item);

#endif