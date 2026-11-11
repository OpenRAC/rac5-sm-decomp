extern int D_002E5868[];
int *func_16F428(char *record)
{
    int *entry = D_002E5868;
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