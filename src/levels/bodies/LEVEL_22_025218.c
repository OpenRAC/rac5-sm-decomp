extern int D_0016A5D8[];

int * func_025218(int value)
{
    int *entry = D_0016A5D8;
    int *end = D_0016A5D8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
