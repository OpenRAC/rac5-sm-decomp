extern int D_003E8BF0[];
int *func_1CD928(char *record)
{
    int *entry = D_003E8BF0;
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