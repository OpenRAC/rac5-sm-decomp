extern int D_00227120[];
int *func_072960(int value)
{
    int *end = D_00227120;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}