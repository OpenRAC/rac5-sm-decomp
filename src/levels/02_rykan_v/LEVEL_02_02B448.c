extern int D_002220D8[];

int * func_02B448(int value)
{
    int *entry = D_002220D8;
    int *end = D_002220D8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
