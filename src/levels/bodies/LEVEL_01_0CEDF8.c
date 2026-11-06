extern int D_00202E18[];
int func_0CEDF8(int value)
{
    unsigned int index = 0;
    int *entry = D_00202E18;
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