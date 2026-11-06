extern int D_001C3320[];

int * func_028470(int value)
{
    int *entry = D_001C3320;
    int *end = D_001C3320 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
