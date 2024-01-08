#include "stutr.h"
#include <unistd.h>

int helper()
{
    write(1, "Usage: tr [OPTION]... STRING1 [STRING2]\n", 40);
    write(1, "Translate, squeeze, and/or delete ", 34);
    write(1, "characters from standard input,\n", 32);
    write(1, "writing to standard output.  ",29);
    write(1, "STRING1 and STRING2 specify arrays of\n", 38);
    write(1, "characters ARRAY1 and ARRAY2 that control the action.\n", 54);
    write(1, "\n", 1);
    write(1, "-c                  use the complement of ARRAY1\n", 50);
    write(1, "-d                  delete characters in ", 41);
    write(1, "ARRAY1, do not translate\n", 25);
    write(1, "-h                  display this help and exit\n", 48);
    return 0;
}
