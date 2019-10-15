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
    int i = 0;
    linked_list_t *element = NULL;
    linked_list_t *tempo = NULL;

    if (ac < 1)
        return (0);
    while (ac > i) {
        element = malloc(sizeof(linked_list_t));
        element->data = av[i];
        element->tempo;
        tempo = element;
        i++;
    }
    return (element);
}
