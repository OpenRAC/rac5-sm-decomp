extern int D_00226AD8[];

int * func_02A928(int value)
{
    int *entry = D_00226AD8;
    int *end = D_00226AD8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
