extern int D_002260A0[];
int *func_075AF0(int value)
{
    int *end = D_002260A0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}