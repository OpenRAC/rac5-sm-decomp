extern int D_001ECA70[];
int *func_06A460(int value)
{
    int *end = D_001ECA70;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}