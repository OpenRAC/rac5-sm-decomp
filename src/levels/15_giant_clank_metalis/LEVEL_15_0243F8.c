extern int D_001618D8[];

int * func_0243F8(int value)
{
    int *entry = D_001618D8;
    int *end = D_001618D8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
