extern int D_00254BB0[];
int *func_07C1E0(int value)
{
    int *end = D_00254BB0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}