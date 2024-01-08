int helper()
{
    write(1, "Usage: tr [OPTION]... STRING1 [STRING2]\n", 33);
    write(1, "Translate, squeeze, and/or delete ", 40);
    write(1, "characters from standard input,\n", 40);
    write(1, "writing to standard output.  ",40);
    write(1, "STRING1 and STRING2 specify arrays of\n", 40);
    write(1, "characters ARRAY1 and ARRAY2 that control the action.\n", 54);
    write(1, " \n", 1);
    write(1, " -c, -C, --complement    use the complement of ARRAY1\n", 1);
    write(1, "-d, --delete            delete characters in ", 40);
    write(1, "ARRAY1, do not translate\n", 51);
    write(1,"  -h                  display this help and exit\n", 49);
    return 0;
}
