extern unsigned int D_001B5D34;
extern unsigned int D_001B5D30;
extern int func_105B48(int);

void func_016B30(void)
{
    unsigned int cursor = D_001B5D34;
    unsigned int end = D_001B5D34 + D_001B5D30 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_105B48(*field);
        cursor += 0x10;
    }
}
