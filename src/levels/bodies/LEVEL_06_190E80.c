extern int D_00383B40[];
int *func_190E80(char *record)
{
    int *entry = D_00383B40;
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