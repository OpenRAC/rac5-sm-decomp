extern int D_001F2198[];
int func_0CD3A0(int value)
{
    unsigned int index = 0;
    int *entry = D_001F2198;
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