extern int D_002437A0[];
int *func_079B78(int value)
{
    int *end = D_002437A0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}