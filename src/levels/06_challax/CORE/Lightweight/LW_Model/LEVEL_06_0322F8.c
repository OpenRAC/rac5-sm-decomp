extern unsigned char D_0021FE78[];

void func_0322F8(int value)
{
    if (D_0021FE78[0x1aa4] == 0) {
        int *current = (int *)(D_0021FE78 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
