extern int D_001ECBF0[];
int *func_06A538(int value)
{
    int *end = D_001ECBF0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}