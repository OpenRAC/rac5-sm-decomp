extern unsigned char D_001E21C0[];

void func_030DB0(int value)
{
    if (D_001E21C0[0x1aa4] == 0) {
        int *current = (int *)(D_001E21C0 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
