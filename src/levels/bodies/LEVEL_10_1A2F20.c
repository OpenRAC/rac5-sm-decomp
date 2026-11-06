extern int D_003A0370[];
int *func_1A2F20(char *record)
{
    int *entry = D_003A0370;
    unsigned int index = 0;
    do {
        ++index;
        if (*(int *)(record + 0x40) != entry[2]) {
            entry += 4;
            continue;
        }
        return entry;
    } while (index < 2);
    return 0;
}