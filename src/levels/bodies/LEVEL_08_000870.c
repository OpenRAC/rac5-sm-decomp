extern int D_00255180[];
unsigned int func_000870(int value)
{
    unsigned int index = 0;
    int *entry = D_00255180;
    do {
        if (*entry != value) {
            ++index;
            entry += 5;
            continue;
        }
        return index;
    } while (index < 0x1c);
    return 0x1c;
}