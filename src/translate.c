#include <stdlib.h>
#include "stutr.h"

int translate(char *to_replace, char *substitutes)
{
    char *buffer;
    char *new_text;
    int count;

    count = 0;
    if (stu_strlen(to_replace) != stu_strlen(substitutes))
        return 5;
    buffer = buffer();
    new_text = malloc(sizeof(char) * stu_strlen(buffer) + 1);
    while (count < stu_strlen(buffer)) {
        count = core(count);
    }
    return 0;
}
