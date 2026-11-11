extern unsigned char D_001FEFF8[];

void func_02EC48(int value)
{
    if (D_001FEFF8[0x1aa4] == 0) {
        int *current = (int *)(D_001FEFF8 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
