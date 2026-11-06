extern int D_00396E80[];
int *func_19B2A8(char *record)
{
    int *entry = D_00396E80;
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