extern int D_002518B0[];
int *func_07FDC0(int value)
{
    int *end = D_002518B0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}