extern int D_001FBFD8[];

int * func_029068(int value)
{
    int *entry = D_001FBFD8;
    int *end = D_001FBFD8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
