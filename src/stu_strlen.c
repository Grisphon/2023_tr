#include <stddef.h>
#include "stutr.h"

int stu_strlen(char *str)
{
    int i;

    i = 0;
    if (str == NULL || str[0] == '\0') {
        return 0;
    }
    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
