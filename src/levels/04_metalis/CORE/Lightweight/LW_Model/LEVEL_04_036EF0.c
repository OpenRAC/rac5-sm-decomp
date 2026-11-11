extern unsigned char D_0024D908[];

void func_036EF0(int value)
{
    if (D_0024D908[0x1aa4] == 0) {
        int *current = (int *)(D_0024D908 + 0x1a94);
        int previous = *current;
        if (previous <= value)
            previous = value;
        *current = previous;
    }
}
