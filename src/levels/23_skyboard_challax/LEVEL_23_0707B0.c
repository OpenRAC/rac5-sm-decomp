extern int D_00207820[];
int *func_0707B0(int value)
{
    int *end = D_00207820;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}