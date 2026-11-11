extern unsigned char D_0021EDF8[];

void func_0335B8(int value)
{
    if (D_0021EDF8[0x1aa4] == 0) {
        int *current = (int *)(D_0021EDF8 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
