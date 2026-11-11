extern int D_0020BE18[];
int func_0D0238(int value)
{
    unsigned int index = 0;
    int *entry = D_0020BE18;
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