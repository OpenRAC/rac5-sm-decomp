extern int D_00217DD8[];
int func_0D5788(int value)
{
    unsigned int index = 0;
    int *entry = D_00217DD8;
    do {
        if (*entry != value) {
            ++index;
            entry += 4;
            continue;
        }
        return index;
    } while (index < 0x26);
    return -1;
}