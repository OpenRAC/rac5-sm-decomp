extern unsigned char D_001E2040[];

void func_031A20(int value)
{
    if (D_001E2040[0x1aa4] == 0) {
        int *current = (int *)(D_001E2040 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
