#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

int core_tr(char *to_replace, char *substitutes, char *buffer)
{
    int letter;
    int count;

    count = 0;
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
    write(1, buffer, stu_strlen(buffer));
    return 0;
}
