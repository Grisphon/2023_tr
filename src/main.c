#include "stutr.h"

int main(int argc, char **argv)
{
    int str_pos;

    str_pos = no_option(argc, argv);
    if (has_opt(argc, argv, 'h') == 1)
        return helper();
    if (argc < 3 || str_pos == -1)
        return arg_err(argv[0]);
    if (has_opt(argc, argv, 'd') == 1) {
        if (has_opt(argc, argv, 'c') == 1) {
            conservation(argv[str_pos]);
        } else {
            delete(argv[str_pos]);
        }
    } else {
        translate(argv[1], argv[2]);
    }
    return 0;
}
