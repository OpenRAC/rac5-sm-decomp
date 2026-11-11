extern int D_00182408[];
int *func_05E580(int value)
{
    int *end = D_00182408;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}