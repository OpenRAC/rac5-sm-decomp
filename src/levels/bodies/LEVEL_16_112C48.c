extern int D_001B81F8[];
int func_112C48(int value)
{
    int *entry = D_001B81F8;
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