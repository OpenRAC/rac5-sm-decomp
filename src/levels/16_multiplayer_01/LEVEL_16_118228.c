/* LEVEL_16:0x118228 -- sets fade color and alpha; then draws a two-pass overlay. */
extern int D_001B84D8;
extern int D_001B84DC;
extern char D_002DFD10[];
extern void func_097540(int a, int b);
extern void func_097360(unsigned c);
extern void func_099138(int x, int y, void *p, float a, float b);

void func_118228(unsigned char v)
{
    D_001B84D8 = v;
    D_001B84DC = 0xFF;
}

void func_118248(void)
{
    unsigned i;

    if (D_001B84DC == 0) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_097540(i, 0);
        func_097360((D_001B84DC << 24) | 0xFFFFFF);
        func_099138(0xF0, 0xD9, D_002DFD10, 0.8f, 0.8f);
        func_097360(0xFFFFFFFF);
    }
}
