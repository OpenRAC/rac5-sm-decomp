/* LEVEL_17:0x117BD8 -- placement copy of LEVEL_16_118228.c: sets fade color and alpha; then draws a two-pass overlay. */
extern int D_001ABAD0;
extern int D_001ABAD4;
extern char D_002D1010[];
extern void func_096A38(int a, int b);
extern void func_096858(unsigned c);
extern void func_098630(int x, int y, void *p, float a, float b);

void func_117BD8(unsigned char v)
{
    D_001ABAD0 = v;
    D_001ABAD4 = 0xFF;
}

void func_117BF8(void)
{
    unsigned i;

    if (D_001ABAD4 == 0) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_096A38(i, 0);
        func_096858((D_001ABAD4 << 24) | 0xFFFFFF);
        func_098630(0xF0, 0xD9, D_002D1010, 0.8f, 0.8f);
        func_096858(0xFFFFFFFF);
    }
}
