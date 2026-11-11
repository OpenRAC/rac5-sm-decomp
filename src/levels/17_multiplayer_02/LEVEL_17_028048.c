extern int D_001B55A0[];

int * func_028048(int value)
{
    int *entry = D_001B55A0;
    int *end = D_001B55A0 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
