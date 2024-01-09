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

int core_dlt(int count, char *to_delete, char *buffer)
{
    int letter;
    char *new_text;
    int check;
    int amount_rm;

    amount_rm = 0;
    check = 0;
    new_text = malloc(sizeof(char) * stu_strlen(buffer));
    letter = 0;
    while (count < stu_strlen(buffer)) {
        while (letter < stu_strlen(to_delete)) {
            if (buffer[count] == to_delete[letter]) {
                check = 1;
                letter = stu_strlen(to_delete);
                amount_rm += 1;
            }
            letter += 1;
        }
        if (check == 0)
            new_text[count - amount_rm] = buffer[count];
        check = 0;
        count += 1;
        letter = 0;
    }
    return freeable(new_text);
}
