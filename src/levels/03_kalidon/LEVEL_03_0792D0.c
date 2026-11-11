extern int D_00255220[];
int *func_0792D0(int value)
{
    int *end = D_00255220;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}