extern unsigned char D_001D3340[];

void func_031368(int value)
{
    if (D_001D3340[0x1aa4] == 0) {
        int *current = (int *)(D_001D3340 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
