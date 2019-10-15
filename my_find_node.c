/*
** EPITECH PROJECT, 2019
** my_find_node
** File description:
** Day 11 Task 06
*/

#include "include/my.h"
#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_find_node(linked_list_t const *begin, \
                            void const *data_ref, int (*cmp)())
{
    while (begin != NULL) {
        if (cmp(begin->data, data_ref))
            return (begin);
        else
            return (0);
        begin = begin->next;
    }
}
