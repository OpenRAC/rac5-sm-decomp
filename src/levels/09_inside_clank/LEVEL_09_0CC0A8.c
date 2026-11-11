extern int D_001ECC18[];
int func_0CC0A8(int value)
{
    unsigned int index = 0;
    int *entry = D_001ECC18;
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