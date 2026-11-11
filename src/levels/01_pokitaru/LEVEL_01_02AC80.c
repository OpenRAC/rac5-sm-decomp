extern int D_0020D158[];

int * func_02AC80(int value)
{
    int *entry = D_0020D158;
    int *end = D_0020D158 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
