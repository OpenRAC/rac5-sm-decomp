extern int D_0037E940[];
int *func_18EE08(char *record)
{
    int *entry = D_0037E940;
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