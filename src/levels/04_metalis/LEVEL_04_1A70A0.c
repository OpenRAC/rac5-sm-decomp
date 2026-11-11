extern int D_003B1B18[];
int *func_1A70A0(char *record)
{
    int *entry = D_003B1B18;
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