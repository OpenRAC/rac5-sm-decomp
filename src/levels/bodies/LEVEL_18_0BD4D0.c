extern int D_001B2148[];
int func_0BD4D0(int value)
{
    unsigned int index = 0;
    int *entry = D_001B2148;
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