extern int D_001B1E48[];
int func_0BDDD0(int value)
{
    unsigned int index = 0;
    int *entry = D_001B1E48;
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