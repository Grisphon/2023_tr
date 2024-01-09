#include <unistd.h>
#include "stutr.h"

int arg_err(char *file_name)
{
    write(2, file_name, stu_strlen(file_name));
    write(2, ": argument error\n", 17);
    return 1;
}
