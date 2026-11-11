extern int D_001AB7F8[];
int func_1123D8(int value)
{
    int *entry = D_001AB7F8;
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