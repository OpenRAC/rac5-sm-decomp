extern int D_00256DD8[];

int * func_02B3F8(int value)
{
    int *entry = D_00256DD8;
    int *end = D_00256DD8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
