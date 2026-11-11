extern int D_00360D88[];
int *func_17BA98(char *record)
{
    int *entry = D_00360D88;
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