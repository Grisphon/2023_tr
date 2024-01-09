void translate(char *to_replace, char *substitutes)
{
    char *buffer;
    int size_read;

    if (stu_strlen(to_replace) != stu_strlen(substitutes))
        return 5;
    size_read = read(1, buffer, 10);
    while (size_read != 0) {
        size_read = read(1, buffer, 10);
    }
}
