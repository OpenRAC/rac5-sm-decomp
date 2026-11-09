/* LEVEL_20:0x0EA740 -- placement copy of LEVEL_16_118228.c: sets fade color and alpha; then draws a two-pass overlay. */
extern int D_0011AB78;
extern int D_0011AB7C;
extern char D_00203268[];
extern void func_081C38(int a, int b);
extern void func_081A58(unsigned c);
extern void func_083830(int x, int y, void *p, float a, float b);

void func_0EA740(unsigned char v)
{
    D_0011AB78 = v;
    D_0011AB7C = 0xFF;
}

void func_0EA760(void)
{
    unsigned i;

    if (D_0011AB7C == 0) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_081C38(i, 0);
        func_081A58((D_0011AB7C << 24) | 0xFFFFFF);
        func_083830(0xF0, 0xD9, D_00203268, 0.8f, 0.8f);
        func_081A58(0xFFFFFFFF);
    }
}
