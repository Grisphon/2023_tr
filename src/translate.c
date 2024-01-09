#include <stdlib.h>
#include "stutr.h"

int translate(char *to_replace, char *substitutes)
{
    char *buffer;
    char *new_text;
    int count;
    int letter;

    count = 0;
    letter = 0;
    if (stu_strlen(to_replace) != stu_strlen(substitutes))
        return 5;
    buffer = buffer();
    new_text = malloc(sizeof(char) * stu_strlen(buffer) + 1);
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
    return 0;
}
