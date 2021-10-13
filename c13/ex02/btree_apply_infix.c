#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
    if(root->left == 0)
        applyf(root);
        return ; 

}