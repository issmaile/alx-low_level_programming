#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program into a single string.
 *
 * @ac: The number of arguments.
 * @av: The argument vector.
 *
 * Return: A pointer to a new string containing all arguments, separated by '\n'.
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return NULL;

    int total_length = 0;
    for (int i = 0; i < ac; i++) {
        if (av[i] == NULL)
            return NULL;
        total_length += strlen(av[i]) + 1;
    }

    char *new_str = malloc(total_length * sizeof(char));
    if (new_str == NULL)
        return NULL;

    int pos = 0;
    for (int i = 0; i < ac; i++) {
        if (i > 0) {
            new_str[pos++] = '\n';
        }
        int arg_len = strlen(av[i]);
        strncpy(new_str + pos, av[i], arg_len);
        pos += arg_len;
    }
    new_str[pos] = '\0';

    return new_str;
}
