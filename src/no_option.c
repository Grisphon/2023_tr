int no_option(int argc, char **argv)
{
    int count;

    count = 1;
    while (count < argc) {
        if (argv[count][0] != '-')
            return count;
        count += 1;
    }
    return -1;
}
