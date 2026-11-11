extern unsigned char D_0024A608[];

void func_03A2F0(int value)
{
    if (D_0024A608[0x1aa4] == 0) {
        int *current = (int *)(D_0024A608 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
