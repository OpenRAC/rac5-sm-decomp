extern int D_0024BCD8[];
int func_0D9DA0(int value)
{
    unsigned int index = 0;
    int *entry = D_0024BCD8;
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