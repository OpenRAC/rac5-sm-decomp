extern int D_002062A0[];
int *func_073C40(int value)
{
    int *end = D_002062A0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}