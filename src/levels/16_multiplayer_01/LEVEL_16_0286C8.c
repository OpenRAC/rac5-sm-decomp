extern int D_001C2120[];

int * func_0286C8(int value)
{
    int *entry = D_001C2120;
    int *end = D_001C2120 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
