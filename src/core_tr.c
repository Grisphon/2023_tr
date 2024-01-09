#include <stdlib.h>
#include <unistd.h>
#include "stutr.h"

static int freeable(char *new_text)
{
    int nb_char;

    nb_char = write(1, new_text, stu_strlen(new_text));
    free(new_text);
    return nb_char;
}

int core_tr(int count, char *to_replace, char *substitutes, char *buffer)
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
    return freeable(new_text);
}
