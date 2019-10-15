/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** Linked list
*/

#include "include/my.h"
#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = ac;
    linked_list_t * head;
    linked_list_t * start;

    head = malloc(sizeof(linked_list_t));
    start = head;
    if (ac < 1)
        return (0);
    while (ac > i) {
        head->data = av[i];
        head->next = malloc(sizeof(linked_list_t));
        head = head->next;
        i--;
    }
    return (start);
}
