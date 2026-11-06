extern int D_0018BFA0[];
int *func_06BE98(int value)
{
    int *end = D_0018BFA0;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}