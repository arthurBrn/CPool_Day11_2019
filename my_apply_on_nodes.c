/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_apply_on_nodes.c
*/

#include "include/my.h"
#include "include/mylist.h"
#include <stdlib.h>

void print_node_data(void *data)
{
    my_putstr(data);
}

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    f = &print_node_data;
    while (begin->next != NULL)
        f(begin->data);
    return (0);
}