extern int D_0021C2D8[];
int func_0D4690(int value)
{
    unsigned int index = 0;
    int *entry = D_0021C2D8;
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