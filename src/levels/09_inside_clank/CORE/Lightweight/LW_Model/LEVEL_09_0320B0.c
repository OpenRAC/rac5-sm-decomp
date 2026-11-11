extern unsigned char D_0021A878[];

void func_0320B0(int value)
{
    if (D_0021A878[0x1aa4] == 0) {
        int *current = (int *)(D_0021A878 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
