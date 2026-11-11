extern unsigned char D_002330F8[];

void func_0358A8(int value)
{
    if (D_002330F8[0x1aa4] == 0) {
        int *current = (int *)(D_002330F8 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
