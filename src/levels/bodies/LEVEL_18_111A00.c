extern int D_001B9678[];
int func_111A00(int value)
{
    int *entry = D_001B9678;
    unsigned int index = 0;
    do {
        if (*entry != value) {
            ++index;
            ++entry;
            continue;
        }
        return 0;
    } while (index < 5);
    return 1;
}