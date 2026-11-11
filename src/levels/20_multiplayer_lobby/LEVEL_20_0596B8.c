extern int D_001442D8[];
int *func_0596B8(int value)
{
    int *end = D_001442D8;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}