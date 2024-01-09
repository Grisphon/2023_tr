#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

int core(int count, char *to_replace, char *substitutes, char *buffer)
{
    int letter;
    char *new_text;
    int check;

    check = 0;
    new_text = malloc(sizeof(char) * stu_strlen(buffer));
    letter = 0;
    while (count < stu_strlen(buffer)) {
        while (letter < stu_strlen(to_replace)) {
            if (buffer[count] == to_replace[letter]) {
                new_text[count] = substitutes[letter];
                check = 1;
                letter = stu_strlen(to_replace);
            }
            letter += 1;
        }
        if (check == 0)
            new_text[count] = buffer[count];
        check = 0;
        count += 1;
        letter = 0;
    }
    return write(1, new_text, stu_strlen(new_text));
}
