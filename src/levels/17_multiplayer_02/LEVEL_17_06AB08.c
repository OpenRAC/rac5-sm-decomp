extern int D_001DDD70[];
int *func_06AB08(int value)
{
    int *end = D_001DDD70;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}