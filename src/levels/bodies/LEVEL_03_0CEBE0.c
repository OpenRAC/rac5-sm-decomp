extern int D_0021B498[];
int func_0CEBE0(int value)
{
    unsigned int index = 0;
    int *entry = D_0021B498;
    do {
        if (*entry != value) {
            ++index;
            entry += 4;
            continue;
        }
        return index;
    } while (index < 0x26);
    return -1;
}