extern int D_0024FCA0[];
int *func_07B6C8(int value)
{
    int *end = D_0024FCA0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}