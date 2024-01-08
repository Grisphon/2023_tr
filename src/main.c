#include "stutr.h"

int main(int argc, char **argv)
{
    if (has_opt(argc, argv, 'h') == 1)
        return helper();
    return 1;
}
