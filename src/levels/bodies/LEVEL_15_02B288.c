extern unsigned char D_0017B278[];

void func_02B288(int value)
{
    if (D_0017B278[0x1aa4] == 0) {
        int *current = (int *)(D_0017B278 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
