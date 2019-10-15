/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_rev_list.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"
int my_list_size(linked_list_t const *begin);

void my_rev_list(linked_list_t **begin)
{
    int list_size = my_list_size(*begin);
    int j = 0;
    linked_list_t *prev = NULL;
    linked_list_t *cur = begin;
    linked_list_t *next = NULL;

    while (list_size > j) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        j++;
    }
}
