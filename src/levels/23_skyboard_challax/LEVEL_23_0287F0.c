extern int D_001E02D8[];

int * func_0287F0(int value)
{
    int *entry = D_001E02D8;
    int *end = D_001E02D8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
