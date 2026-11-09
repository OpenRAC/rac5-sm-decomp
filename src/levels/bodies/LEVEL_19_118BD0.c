/* LEVEL_19:0x118BD0 -- placement copy of LEVEL_16_118228.c: sets fade color and alpha; then draws a two-pass overlay. */
extern int D_001B9650;
extern int D_001B9654;
extern char D_002DFE90[];
extern void func_096DD0(int a, int b);
extern void func_096BF0(unsigned c);
extern void func_0989C8(int x, int y, void *p, float a, float b);

void func_118BD0(unsigned char v)
{
    D_001B9650 = v;
    D_001B9654 = 0xFF;
}

void func_118BF0(void)
{
    unsigned i;

    if (D_001B9654 == 0) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_096DD0(i, 0);
        func_096BF0((D_001B9654 << 24) | 0xFFFFFF);
        func_0989C8(0xF0, 0xD9, D_002DFE90, 0.8f, 0.8f);
        func_096BF0(0xFFFFFFFF);
    }
}
