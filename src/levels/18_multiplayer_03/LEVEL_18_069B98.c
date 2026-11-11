extern int D_001ECDF0[];
int *func_069B98(int value)
{
    int *end = D_001ECDF0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}