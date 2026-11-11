extern unsigned char D_001E23C0[];

void func_0302F0(int value)
{
    if (D_001E23C0[0x1aa4] == 0) {
        int *current = (int *)(D_001E23C0 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
