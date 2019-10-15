/*
** EPITECH PROJECT, 2019
** my_list_size
** File description:
** Day 11 Task 02
*/

#include "include/my.h"
#include "incldue/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t const *current_list = begin;
    int count = 0;

    while (current_list != 0) {
        count++;
        current_list = current_list->next;
    }
    return (count);
}
