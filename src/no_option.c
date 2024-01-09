int no_option(char **argv)
{
    if (argv[1][0] == '-')
        return 2;
    return 1;
}
