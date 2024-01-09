#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

int conservation(char *to_keep)
{
    char *buffer;
    int count;
    int size_read;

    count = 0;
    buffer = malloc(sizeof(char) * 100);
    size_read = read(0, buffer, 100);
    while (size_read > 0) {
        core_kp(count, to_keep, buffer);
        size_read = read(0, buffer, 100);
    }
    free(buffer);
    return 0;
}
