extern int D_00221B20[];
int *func_075FE0(int value)
{
    int *end = D_00221B20;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}