extern int D_001133A8[];
int func_0A8A28(int value)
{
    unsigned int index = 0;
    int *entry = D_001133A8;
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