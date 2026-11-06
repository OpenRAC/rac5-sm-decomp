extern int D_001C36A0[];

int * func_027C78(int value)
{
    int *entry = D_001C36A0;
    int *end = D_001C36A0 + 10;
    while (entry != end && *entry != value) {
        entry += 2;
    }
    return entry;
}
