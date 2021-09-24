#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int size; 
    t_list *nav;
    t_list *tmp;

    size = 0;
    nav = begin_list;
    if (begin_list != NULL)
        {
            size++;  
            while (nav->next != NULL)
            {
                size++;
                tmp = nav->next;
                nav = tmp;
            }
        }
    return (size);
}

/*#include <stdio.h>

int main()
{
   t_list *head; 
   t_list *second; 
   // t_list *third;
   int size;

   head = ft_create_elem(1);
   second = ft_create_elem(1);
   head->next = second;
   size = ft_list_size(head);
   
   printf("%d\n", size);
   return (0);
}*/
