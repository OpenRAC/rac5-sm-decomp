extern int D_00157A98[];
int func_0AF440(int value)
{
    unsigned int index = 0;
    int *entry = D_00157A98;
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