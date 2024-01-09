#include <stdlib.h>
#include "stutr.h"

int translate(char *to_replace, char *substitutes)
{
    char *buffer;
    int count;
    char *new_text;
    int letter;

    count = 0;
    letter = 0;
    if (stu_strlen(to_replace) != stu_strlen(substitutes))
        return 1;
    while (count < stu_strlen(buffer)) {
        while (letter < stu_strlen(to_replace)) {
            if (buffer[count] == to_replace[letter]) {
                new_text[count] = substitutes[letter];
                letter = 0;
                count += 1;
            }
            letter += 1;
        }
        new_text[count] = buffer[count];
        count += 1;
    }
    write(1, new_text, 10);
}
