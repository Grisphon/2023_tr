#include <unistd.h>
#include "stutr.h"

char *buffer()
{
    char *buffer;
    int size_read;

    size_read = read(1, buffer, 10);
    while (size_read != 0) {
        size_read = read(1, buffer, 10);
    }
    return buffer;
}
