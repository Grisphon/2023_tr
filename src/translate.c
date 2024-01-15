#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

int translate(char *to_replace, char *substitutes)
{
    char *buffer;
    int size_read;

    if (stu_strlen(to_replace) != stu_strlen(substitutes))
        return 1;
    buffer = malloc(sizeof(char) * 11);
    size_read = read(0, buffer, 10);
    buffer[size_read] = '\0';
    while (size_read > 0) {
        core_tr(to_replace, substitutes, buffer);
        free(buffer);
        buffer = malloc(sizeof(char) * 11);
        size_read = read(0, buffer, 10);
        buffer[size_read] = '\0';
    }
    free(buffer);
    return 0;
}

