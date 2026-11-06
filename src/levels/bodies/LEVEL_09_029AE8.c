extern int D_001F6D58[];

int * func_029AE8(int value)
{
    int *entry = D_001F6D58;
    int *end = D_001F6D58 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
