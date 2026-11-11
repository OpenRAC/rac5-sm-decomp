extern int D_0038E580[];
int *func_196F50(char *record)
{
    int *entry = D_0038E580;
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