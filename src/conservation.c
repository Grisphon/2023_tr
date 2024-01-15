#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

int conservation(char *to_keep)
{
    char *buffer;
    int count;
    int size_read;

    count = 0;
    buffer = malloc(sizeof(char) * 101);
    size_read = read(0, buffer, 100);
    buffer[size_read] = '\0';
    while (size_read > 0) {
        core_kp(count, to_keep, buffer);
        free(buffer);
        buffer = malloc(sizeof(char) * 101);
        size_read = read(0, buffer, 100);
        buffer[size_read] = '\0';
    }
    free(buffer);
    return 0;
}
