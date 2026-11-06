extern int D_003AEE78[];
int *func_1B0F98(char *record)
{
    int *entry = D_003AEE78;
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