#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
    void *item;
    s_btree*left; 
    s_btree *right; 
}   t_btree;



#endif