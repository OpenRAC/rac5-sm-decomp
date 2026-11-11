extern int D_00221E58[];

int * func_02AFC0(int value)
{
    int *entry = D_00221E58;
    int *end = D_00221E58 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
