extern int D_00226058[];

int * func_02AA78(int value)
{
    int *entry = D_00226058;
    int *end = D_00226058 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
