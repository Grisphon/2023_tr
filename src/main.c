#include "stutr.h"

int main(int argc, char **argv)
{
    if (has_opt(argc, argv, 'h') == 1)
        return helper();
    if (argc != 3)
        return 1;
    if (has_opt(argc, argv, 'd') == 1) {
        if (has_opt(argc, argv, 'c') == 1) {
            //    conservation(argv[no_option(argv)]);
        } else {
            delete(argv[no_option(argv)]);
        }
    } else {
        translate(argv[1], argv[2]);
    }
    return 0;
}
