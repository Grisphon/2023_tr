int core(int count, char *to_replace, char *substitutes)
{
    int letter;

    letter = 0;
    while (letter < stu_strlen(to_replace)) {
        if (buffer[count] == to_replace[letter]) {
            new_text[count] = substitutes[letter];
            letter = 0;
            count += 1;
        }
        letter += 1;
    }
    new_text[count] = buffer[count];
    count += 1;
    return count;
}
