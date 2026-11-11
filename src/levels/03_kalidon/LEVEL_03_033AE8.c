extern unsigned char D_0024DF78[];

void func_033AE8(int value)
{
    if (D_0024DF78[0x1aa4] == 0) {
        int *current = (int *)(D_0024DF78 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
