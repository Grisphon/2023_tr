#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

int translate(char *to_replace, char *substitutes)
{
    char *buffer;
    int count;
    int size_read;

    count = 0;
    if (stu_strlen(to_replace) != stu_strlen(substitutes))
        return 1;
    buffer = malloc(sizeof(char) * 10);
    size_read = read(0, buffer, 10);
    while (size_read > 0) {
        core_tr(count, to_replace, substitutes, buffer);
        size_read = read(0, buffer, 10);
    }
    free(buffer);
    return 0;
}
