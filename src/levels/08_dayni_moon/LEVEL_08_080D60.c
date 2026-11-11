extern int D_00289630[];
int *func_080D60(int value)
{
    int *end = D_00289630;
    int *entry = end;
    entry -= 64;
    while (entry != end) {
        if (*entry == value)
            return entry;
        entry += 4;
    }
    return 0;
}