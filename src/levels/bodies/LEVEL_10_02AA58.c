extern int D_002160D8[];

int * func_02AA58(int value)
{
    int *entry = D_002160D8;
    int *end = D_002160D8 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
