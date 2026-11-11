extern int D_001DDED8[];

int * func_0281C0(int value)
{
    int *entry = D_001DDED8;
    int *end = D_001DDED8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
