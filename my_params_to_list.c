/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** Linked list
*/
#include "include/my.h"
#include "include/my_struct.h"
#include <stdlib.h>
#include <stdio.h>


linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    linked_list_t * head;

    if (ac < 1)
        return (0);
    while (ac > i) {
        head = malloc(sizeof(linked_list_t));
        head->data = av[i];
        head->next = malloc(sizeof(linked_list_t));
        i++;
    }
    return (head);
}

int main(int ac, char * const *av)
{
    return my_params_to_list(ac, av);
}
