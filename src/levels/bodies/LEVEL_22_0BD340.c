extern int D_00162198[];
int func_0BD340(int value)
{
    unsigned int index = 0;
    int *entry = D_00162198;
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