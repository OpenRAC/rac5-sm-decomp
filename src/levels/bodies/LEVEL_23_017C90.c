extern unsigned int D_001DA1A4;
extern unsigned int D_001DA1A0;
extern int func_11AEE0(int);

void func_017C90(void)
{
    unsigned int cursor = D_001DA1A4;
    unsigned int end = D_001DA1A4 + D_001DA1A0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_11AEE0(*field);
        cursor += 0x10;
    }
}
