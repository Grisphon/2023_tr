#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

int core_tr(int count, char *to_replace, char *substitutes, char *buffer)
{
    int letter;

    letter = 0;
    while (count < stu_strlen(buffer)) {
        while (letter < stu_strlen(to_replace)) {
            if (buffer[count] == to_replace[letter]) {
                buffer[count] = substitutes[letter];
                letter = stu_strlen(to_replace);
            }
            letter += 1;
        }
        count += 1;
        letter = 0;
    }
    return 0;
}
