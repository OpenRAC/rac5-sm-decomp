extern int D_001231A0[];

int * func_0251D0(int value)
{
    int *entry = D_001231A0;
    int *end = D_001231A0 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
