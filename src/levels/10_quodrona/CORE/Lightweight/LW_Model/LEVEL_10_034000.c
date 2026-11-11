extern unsigned char D_0023C4F8[];

void func_034000(int value)
{
    if (D_0023C4F8[0x1aa4] == 0) {
        int *current = (int *)(D_0023C4F8 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
