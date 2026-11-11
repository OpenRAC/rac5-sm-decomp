extern int D_0023A3A0[];
int *func_0794D8(int value)
{
    int *end = D_0023A3A0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}