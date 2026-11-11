extern unsigned char D_00282388[];

void func_03A720(int value)
{
    if (D_00282388[0x1aa4] == 0) {
        int *current = (int *)(D_00282388 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
