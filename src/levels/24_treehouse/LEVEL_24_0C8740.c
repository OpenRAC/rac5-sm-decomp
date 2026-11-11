extern int D_001D3A98[];
int func_0C8740(int value)
{
    unsigned int index = 0;
    int *entry = D_001D3A98;
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