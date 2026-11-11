extern unsigned char D_00184CF8[];

void func_02BAA0(int value)
{
    if (D_00184CF8[0x1aa4] == 0) {
        int *current = (int *)(D_00184CF8 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
