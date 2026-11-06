extern int D_001FC058[];

int * func_0298F8(int value)
{
    int *entry = D_001FC058;
    int *end = D_001FC058 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
